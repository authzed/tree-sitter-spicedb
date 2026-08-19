#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "unicode_ranges.h"

enum TokenType {
  IDENTIFIER,
  QUALIFIED_IDENTIFIER,
  SELF_KEYWORD,
  EXPIRATION_KEYWORD,
  AND_KEYWORD,
  NIL_KEYWORD,
  ERROR_SENTINEL,
};

void *tree_sitter_spicedb_external_scanner_create(void) {
  return NULL;
}

void tree_sitter_spicedb_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_spicedb_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_spicedb_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

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

static bool scan_segment(TSLexer *lexer) {
  if (!is_identifier_char(lexer->lookahead)) return false;
  while (is_identifier_char(lexer->lookahead)) lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  return true;
}

bool tree_sitter_spicedb_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[ERROR_SENTINEL] ||
      (!valid_symbols[IDENTIFIER] && !valid_symbols[QUALIFIED_IDENTIFIER] &&
       !valid_symbols[SELF_KEYWORD] && !valid_symbols[EXPIRATION_KEYWORD] &&
       !valid_symbols[AND_KEYWORD] && !valid_symbols[NIL_KEYWORD])) return false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') lexer->advance(lexer, true);
  char value[16] = {0};
  size_t length = 0;
  bool ascii = true;
  if (!is_identifier_char(lexer->lookahead)) return false;
  while (is_identifier_char(lexer->lookahead)) {
    if (lexer->lookahead >= 0x80 || length + 1 >= sizeof(value)) ascii = false;
    else if (ascii) value[length++] = (char)lexer->lookahead;
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  if (ascii && !strcmp(value, "self") && valid_symbols[SELF_KEYWORD]) {
    lexer->result_symbol = SELF_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "expiration") && valid_symbols[EXPIRATION_KEYWORD]) {
    lexer->result_symbol = EXPIRATION_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "and") && valid_symbols[AND_KEYWORD]) {
    lexer->result_symbol = AND_KEYWORD;
    return true;
  }
  if (ascii && !strcmp(value, "nil") && valid_symbols[NIL_KEYWORD]) {
    lexer->result_symbol = NIL_KEYWORD;
    return true;
  }

  if (valid_symbols[QUALIFIED_IDENTIFIER]) {
    while (lexer->lookahead == '/') {
      lexer->advance(lexer, false);
      if (!scan_segment(lexer)) return false;
    }
    lexer->result_symbol = QUALIFIED_IDENTIFIER;
  } else {
    lexer->result_symbol = IDENTIFIER;
  }
  return true;
}
