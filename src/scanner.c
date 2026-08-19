#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "unicode_ranges.h"

enum TokenType {
  IDENTIFIER,
  USE_SELF_FLAG,
  USE_EXPIRATION_FLAG,
  USE_PARTIAL_FLAG,
  USE_IMPORT_FLAG,
  USE_TYPECHECKING_FLAG,
  DEFINITION_KEYWORD,
  CAVEAT_KEYWORD,
  SELF_KEYWORD,
  EXPIRATION_KEYWORD,
  AND_KEYWORD,
  NIL_KEYWORD,
  PARTIAL_KEYWORD,
  IMPORT_KEYWORD,
  RELATION_ELLIPSIS,
  PIPE,
  SEMICOLON,
  NEWLINE,
  ERROR_SENTINEL,
};

typedef struct {
  bool self_enabled;
  bool expiration_enabled;
  bool partial_enabled;
  bool import_enabled;
  bool definition_seen;
  bool typechecking_enabled;
  bool relation_ellipsis;
} Scanner;

void *tree_sitter_spicedb_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_spicedb_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_spicedb_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = payload;
  buffer[0] = scanner->self_enabled | scanner->expiration_enabled << 1 |
      scanner->partial_enabled << 2 | scanner->import_enabled << 3 |
      scanner->definition_seen << 4 | scanner->typechecking_enabled << 5 |
      scanner->relation_ellipsis << 6;
  return 1;
}

void tree_sitter_spicedb_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = payload;
  scanner->self_enabled = length > 0 && (buffer[0] & 1);
  scanner->expiration_enabled = length > 0 && (buffer[0] & 2);
  scanner->partial_enabled = length > 0 && (buffer[0] & 4);
  scanner->import_enabled = length > 0 && (buffer[0] & 8);
  scanner->definition_seen = length > 0 && (buffer[0] & 16);
  scanner->typechecking_enabled = length > 0 && (buffer[0] & 32);
  scanner->relation_ellipsis = length > 0 && (buffer[0] & 64);
}

static bool is_unicode_letter_or_digit(int32_t codepoint) {
  size_t left = 0;
  size_t right = UNICODE_IDENTIFIER_RANGE_COUNT;
  while (left < right) {
    size_t middle = left + (right - left) / 2;
    UnicodeRange range = UNICODE_IDENTIFIER_RANGES[middle];
    if ((uint32_t)codepoint < range.first) right = middle;
    else if ((uint32_t)codepoint > range.last) left = middle + 1;
    else return true;
  }
  return false;
}

static bool is_identifier_char(int32_t codepoint) {
  if (codepoint == '_' || (codepoint >= '0' && codepoint <= '9') ||
      (codepoint >= 'A' && codepoint <= 'Z') || (codepoint >= 'a' && codepoint <= 'z')) return true;
  return codepoint >= 0x80 && is_unicode_letter_or_digit(codepoint);
}

static bool is_reserved(const char *value) {
  return !strcmp(value, "definition") || !strcmp(value, "caveat") ||
      !strcmp(value, "relation") || !strcmp(value, "permission") ||
      !strcmp(value, "nil") || !strcmp(value, "with");
}

static bool scan_segment(TSLexer *lexer, char *value, size_t size, bool *ascii) {
  size_t length = 0;
  *ascii = true;
  if (!is_identifier_char(lexer->lookahead)) return false;
  while (is_identifier_char(lexer->lookahead)) {
    if (lexer->lookahead >= 0x80 || length + 1 >= size) *ascii = false;
    else if (*ascii) value[length++] = (char)lexer->lookahead;
    lexer->advance(lexer, false);
  }
  value[length] = '\0';
  lexer->mark_end(lexer);
  return true;
}

bool tree_sitter_spicedb_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = payload;
  if (valid_symbols[ERROR_SENTINEL]) return false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') lexer->advance(lexer, true);
  if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    if (!valid_symbols[NEWLINE] || scanner->relation_ellipsis) return false;
    int32_t first = lexer->lookahead;
    lexer->advance(lexer, false);
    if (first == '\r' && lexer->lookahead == '\n') lexer->advance(lexer, false);
    scanner->relation_ellipsis = false;
    lexer->result_symbol = NEWLINE;
    return true;
  }
  if (valid_symbols[PIPE] && lexer->lookahead == '|') {
    lexer->advance(lexer, false);
    scanner->relation_ellipsis = false;
    lexer->result_symbol = PIPE;
    return true;
  }
  if (valid_symbols[SEMICOLON] && lexer->lookahead == ';') {
    lexer->advance(lexer, false);
    scanner->relation_ellipsis = false;
    lexer->result_symbol = SEMICOLON;
    return true;
  }
  if (valid_symbols[RELATION_ELLIPSIS] && lexer->lookahead == '.') {
    for (unsigned i = 0; i < 3; i++) {
      if (lexer->lookahead != '.') return false;
      lexer->advance(lexer, false);
    }
    scanner->relation_ellipsis = true;
    lexer->result_symbol = RELATION_ELLIPSIS;
    return true;
  }
  if (
      (!valid_symbols[IDENTIFIER] &&
       !valid_symbols[USE_SELF_FLAG] && !valid_symbols[USE_EXPIRATION_FLAG] &&
       !valid_symbols[USE_PARTIAL_FLAG] && !valid_symbols[USE_IMPORT_FLAG] &&
       !valid_symbols[USE_TYPECHECKING_FLAG] && !valid_symbols[DEFINITION_KEYWORD] &&
       !valid_symbols[CAVEAT_KEYWORD] && !valid_symbols[SELF_KEYWORD] &&
       !valid_symbols[EXPIRATION_KEYWORD] &&
       !valid_symbols[AND_KEYWORD] && !valid_symbols[NIL_KEYWORD] &&
       !valid_symbols[PARTIAL_KEYWORD] && !valid_symbols[IMPORT_KEYWORD])) return false;
  char value[16] = {0};
  bool ascii = true;
  if (!scan_segment(lexer, value, sizeof(value), &ascii)) return false;
  scanner->relation_ellipsis = false;
  if (ascii && !strcmp(value, "definition") && valid_symbols[DEFINITION_KEYWORD]) {
    scanner->definition_seen = true;
    lexer->result_symbol = DEFINITION_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "caveat") && valid_symbols[CAVEAT_KEYWORD]) {
    scanner->definition_seen = true;
    lexer->result_symbol = CAVEAT_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "self")) {
    if (valid_symbols[USE_SELF_FLAG]) {
      if (scanner->definition_seen) return false;
      scanner->self_enabled = true;
      lexer->result_symbol = USE_SELF_FLAG;
      return true;
    }
    if (scanner->self_enabled) {
      if (!valid_symbols[SELF_KEYWORD]) return false;
      lexer->result_symbol = SELF_KEYWORD;
      return true;
    }
  }
  if (ascii && !strcmp(value, "expiration")) {
    if (valid_symbols[USE_EXPIRATION_FLAG]) {
      if (scanner->definition_seen) return false;
      scanner->expiration_enabled = true;
      lexer->result_symbol = USE_EXPIRATION_FLAG;
      return true;
    }
    if (scanner->expiration_enabled) {
      if (!valid_symbols[EXPIRATION_KEYWORD]) return false;
      lexer->result_symbol = EXPIRATION_KEYWORD;
      return true;
    }
  }
  if (ascii && !strcmp(value, "and") && scanner->expiration_enabled) {
    if (!valid_symbols[AND_KEYWORD]) return false;
    lexer->result_symbol = AND_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "nil") && valid_symbols[NIL_KEYWORD]) {
    lexer->result_symbol = NIL_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "partial")) {
    if (valid_symbols[USE_PARTIAL_FLAG]) {
      if (scanner->definition_seen) return false;
      scanner->partial_enabled = true;
      lexer->result_symbol = USE_PARTIAL_FLAG;
      return true;
    }
    if (scanner->partial_enabled) {
      if (!valid_symbols[PARTIAL_KEYWORD]) return false;
      lexer->result_symbol = PARTIAL_KEYWORD;
      return true;
    }
  }
  if (ascii && !strcmp(value, "import")) {
    if (valid_symbols[USE_IMPORT_FLAG]) {
      if (scanner->definition_seen) return false;
      scanner->import_enabled = true;
      lexer->result_symbol = USE_IMPORT_FLAG;
      return true;
    }
    if (scanner->import_enabled) {
      if (!valid_symbols[IMPORT_KEYWORD]) return false;
      lexer->result_symbol = IMPORT_KEYWORD;
      return true;
    }
  }
  if (ascii && !strcmp(value, "typechecking") && valid_symbols[USE_TYPECHECKING_FLAG]) {
    if (scanner->definition_seen) return false;
    scanner->typechecking_enabled = true;
    lexer->result_symbol = USE_TYPECHECKING_FLAG;
    return true;
  }
  if (ascii && !strcmp(value, "typechecking") && scanner->typechecking_enabled) return false;
  if (ascii && is_reserved(value)) return false;

  if (!valid_symbols[IDENTIFIER]) return false;
  lexer->result_symbol = IDENTIFIER;
  return true;
}
