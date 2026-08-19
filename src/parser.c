#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 5
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  anon_sym_CR = 4,
  sym_comment = 5,
  sym_qualified_identifier = 6,
  anon_sym_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT = 9,
  anon_sym_definition = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_use = 13,
  anon_sym_import = 14,
  sym_string_literal = 15,
  anon_sym_partial = 16,
  anon_sym_DOT_DOT_DOT = 17,
  anon_sym_COLON = 18,
  anon_sym_STAR = 19,
  anon_sym_POUND = 20,
  anon_sym_with = 21,
  anon_sym_expiration = 22,
  anon_sym_and = 23,
  anon_sym_DASH_GT = 24,
  anon_sym_DOT = 25,
  anon_sym_any = 26,
  anon_sym_all = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_relation = 30,
  anon_sym_PIPE = 31,
  anon_sym_permission = 32,
  anon_sym_EQ = 33,
  anon_sym_nil = 34,
  sym_self_expression = 35,
  anon_sym_PLUS = 36,
  anon_sym_AMP = 37,
  anon_sym_DASH = 38,
  anon_sym_caveat = 39,
  sym_caveat_text = 40,
  sym_caveat_whitespace = 41,
  sym_caveat_string = 42,
  sym_caveat_comment = 43,
  sym_source_file = 44,
  sym__statement_terminator = 45,
  sym__top_level = 46,
  sym_parameter_identifier = 47,
  sym_parameter_type_identifier = 48,
  sym_object_definition = 49,
  sym_use_flag = 50,
  sym_import = 51,
  sym_partial_definition = 52,
  sym_partial_reference = 53,
  sym_relation_type = 54,
  sym_wildcard_type = 55,
  sym_reference_type = 56,
  sym_relation_trait = 57,
  sym_expiration_trait = 58,
  sym_caveat_with_expiration = 59,
  sym_userset = 60,
  sym_arrow_expression = 61,
  sym_relation = 62,
  sym_relation_expr = 63,
  sym_unary_relation_expr = 64,
  sym_binary_relation_expr = 65,
  sym_permission = 66,
  sym_permission_type_annotation = 67,
  sym_permission_expr = 68,
  sym_unary_permission_expr = 69,
  sym_parenthesized_permission_expression = 70,
  sym_binary_permission_expr = 71,
  sym_caveat_definition = 72,
  sym_parameter = 73,
  sym_caveat_expr = 74,
  sym__caveat_content = 75,
  sym_caveat_object = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_parameter_type_identifier_repeat1 = 78,
  aux_sym_object_definition_repeat1 = 79,
  aux_sym_object_definition_repeat2 = 80,
  aux_sym_permission_type_annotation_repeat1 = 81,
  aux_sym_caveat_definition_repeat1 = 82,
  aux_sym_caveat_expr_repeat1 = 83,
  aux_sym_caveat_expr_repeat2 = 84,
  aux_sym_caveat_object_repeat1 = 85,
  alias_sym_cel_type_identifier = 86,
  alias_sym_cel_variable_identifier = 87,
  alias_sym_field_identifier = 88,
  alias_sym_func_identifier = 89,
  alias_sym_method_identifier = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym_comment] = "comment",
  [sym_qualified_identifier] = "type_identifier",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_definition] = "definition",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_use] = "use",
  [anon_sym_import] = "import",
  [sym_string_literal] = "string_literal",
  [anon_sym_partial] = "partial",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_with] = "with",
  [anon_sym_expiration] = "expiration",
  [anon_sym_and] = "and",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_any] = "any",
  [anon_sym_all] = "all",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_relation] = "relation",
  [anon_sym_PIPE] = "|",
  [anon_sym_permission] = "permission",
  [anon_sym_EQ] = "=",
  [anon_sym_nil] = "nil",
  [sym_self_expression] = "self_expression",
  [anon_sym_PLUS] = "+",
  [anon_sym_AMP] = "&",
  [anon_sym_DASH] = "-",
  [anon_sym_caveat] = "caveat",
  [sym_caveat_text] = "caveat_text",
  [sym_caveat_whitespace] = "caveat_whitespace",
  [sym_caveat_string] = "caveat_string",
  [sym_caveat_comment] = "caveat_comment",
  [sym_source_file] = "source_file",
  [sym__statement_terminator] = "_statement_terminator",
  [sym__top_level] = "_top_level",
  [sym_parameter_identifier] = "parameter_identifier",
  [sym_parameter_type_identifier] = "parameter_type_identifier",
  [sym_object_definition] = "object_definition",
  [sym_use_flag] = "use_flag",
  [sym_import] = "import",
  [sym_partial_definition] = "partial_definition",
  [sym_partial_reference] = "partial_reference",
  [sym_relation_type] = "relation_type",
  [sym_wildcard_type] = "wildcard_type",
  [sym_reference_type] = "reference_type",
  [sym_relation_trait] = "relation_trait",
  [sym_expiration_trait] = "expiration_trait",
  [sym_caveat_with_expiration] = "caveat_with_expiration",
  [sym_userset] = "userset",
  [sym_arrow_expression] = "arrow_expression",
  [sym_relation] = "relation",
  [sym_relation_expr] = "relation_expr",
  [sym_unary_relation_expr] = "unary_relation_expr",
  [sym_binary_relation_expr] = "binary_relation_expr",
  [sym_permission] = "permission",
  [sym_permission_type_annotation] = "permission_type_annotation",
  [sym_permission_expr] = "permission_expr",
  [sym_unary_permission_expr] = "unary_permission_expr",
  [sym_parenthesized_permission_expression] = "parenthesized_permission_expression",
  [sym_binary_permission_expr] = "binary_permission_expr",
  [sym_caveat_definition] = "caveat_definition",
  [sym_parameter] = "parameter",
  [sym_caveat_expr] = "caveat_expr",
  [sym__caveat_content] = "_caveat_content",
  [sym_caveat_object] = "caveat_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_type_identifier_repeat1] = "parameter_type_identifier_repeat1",
  [aux_sym_object_definition_repeat1] = "object_definition_repeat1",
  [aux_sym_object_definition_repeat2] = "object_definition_repeat2",
  [aux_sym_permission_type_annotation_repeat1] = "permission_type_annotation_repeat1",
  [aux_sym_caveat_definition_repeat1] = "caveat_definition_repeat1",
  [aux_sym_caveat_expr_repeat1] = "caveat_expr_repeat1",
  [aux_sym_caveat_expr_repeat2] = "caveat_expr_repeat2",
  [aux_sym_caveat_object_repeat1] = "caveat_object_repeat1",
  [alias_sym_cel_type_identifier] = "cel_type_identifier",
  [alias_sym_cel_variable_identifier] = "cel_variable_identifier",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_func_identifier] = "func_identifier",
  [alias_sym_method_identifier] = "method_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym_comment] = sym_comment,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_definition] = anon_sym_definition,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_import] = anon_sym_import,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_expiration] = anon_sym_expiration,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_permission] = anon_sym_permission,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_nil] = anon_sym_nil,
  [sym_self_expression] = sym_self_expression,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_caveat] = anon_sym_caveat,
  [sym_caveat_text] = sym_caveat_text,
  [sym_caveat_whitespace] = sym_caveat_whitespace,
  [sym_caveat_string] = sym_caveat_string,
  [sym_caveat_comment] = sym_caveat_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement_terminator] = sym__statement_terminator,
  [sym__top_level] = sym__top_level,
  [sym_parameter_identifier] = sym_parameter_identifier,
  [sym_parameter_type_identifier] = sym_parameter_type_identifier,
  [sym_object_definition] = sym_object_definition,
  [sym_use_flag] = sym_use_flag,
  [sym_import] = sym_import,
  [sym_partial_definition] = sym_partial_definition,
  [sym_partial_reference] = sym_partial_reference,
  [sym_relation_type] = sym_relation_type,
  [sym_wildcard_type] = sym_wildcard_type,
  [sym_reference_type] = sym_reference_type,
  [sym_relation_trait] = sym_relation_trait,
  [sym_expiration_trait] = sym_expiration_trait,
  [sym_caveat_with_expiration] = sym_caveat_with_expiration,
  [sym_userset] = sym_userset,
  [sym_arrow_expression] = sym_arrow_expression,
  [sym_relation] = sym_relation,
  [sym_relation_expr] = sym_relation_expr,
  [sym_unary_relation_expr] = sym_unary_relation_expr,
  [sym_binary_relation_expr] = sym_binary_relation_expr,
  [sym_permission] = sym_permission,
  [sym_permission_type_annotation] = sym_permission_type_annotation,
  [sym_permission_expr] = sym_permission_expr,
  [sym_unary_permission_expr] = sym_unary_permission_expr,
  [sym_parenthesized_permission_expression] = sym_parenthesized_permission_expression,
  [sym_binary_permission_expr] = sym_binary_permission_expr,
  [sym_caveat_definition] = sym_caveat_definition,
  [sym_parameter] = sym_parameter,
  [sym_caveat_expr] = sym_caveat_expr,
  [sym__caveat_content] = sym__caveat_content,
  [sym_caveat_object] = sym_caveat_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_type_identifier_repeat1] = aux_sym_parameter_type_identifier_repeat1,
  [aux_sym_object_definition_repeat1] = aux_sym_object_definition_repeat1,
  [aux_sym_object_definition_repeat2] = aux_sym_object_definition_repeat2,
  [aux_sym_permission_type_annotation_repeat1] = aux_sym_permission_type_annotation_repeat1,
  [aux_sym_caveat_definition_repeat1] = aux_sym_caveat_definition_repeat1,
  [aux_sym_caveat_expr_repeat1] = aux_sym_caveat_expr_repeat1,
  [aux_sym_caveat_expr_repeat2] = aux_sym_caveat_expr_repeat2,
  [aux_sym_caveat_object_repeat1] = aux_sym_caveat_object_repeat1,
  [alias_sym_cel_type_identifier] = alias_sym_cel_type_identifier,
  [alias_sym_cel_variable_identifier] = alias_sym_cel_variable_identifier,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_func_identifier] = alias_sym_func_identifier,
  [alias_sym_method_identifier] = alias_sym_method_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expiration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym_self_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caveat] = {
    .visible = true,
    .named = false,
  },
  [sym_caveat_text] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_string] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_use_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_expiration_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_with_expiration] = {
    .visible = true,
    .named = true,
  },
  [sym_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_permission_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__caveat_content] = {
    .visible = false,
    .named = true,
  },
  [sym_caveat_object] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_type_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_permission_type_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_expr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caveat_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_cel_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_cel_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_func_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_method_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_expr = 2,
  field_name = 3,
  field_parameters = 4,
  field_path = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expr] = "expr",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 3},
  [14] = {.index = 16, .length = 3},
  [18] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_path, 1},
  [2] =
    {field_body, 0},
  [3] =
    {field_body, 3, .inherited = true},
    {field_name, 1},
  [5] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_body, 4, .inherited = true},
    {field_name, 1},
  [11] =
    {field_expr, 3},
    {field_name, 1},
  [13] =
    {field_expr, 4},
    {field_name, 1},
    {field_type, 2},
  [16] =
    {field_expr, 6},
    {field_name, 1},
    {field_parameters, 3},
  [19] =
    {field_expr, 7},
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_cel_variable_identifier,
  },
  [7] = {
    [0] = alias_sym_cel_type_identifier,
  },
  [10] = {
    [1] = alias_sym_field_identifier,
  },
  [11] = {
    [0] = alias_sym_field_identifier,
  },
  [12] = {
    [1] = alias_sym_method_identifier,
  },
  [13] = {
    [1] = alias_sym_method_identifier,
  },
  [14] = {
    [1] = alias_sym_func_identifier,
  },
  [15] = {
    [2] = alias_sym_field_identifier,
  },
  [16] = {
    [1] = alias_sym_func_identifier,
  },
  [17] = {
    [0] = alias_sym_field_identifier,
    [2] = alias_sym_field_identifier,
  },
  [18] = {
    [1] = alias_sym_func_identifier,
  },
  [19] = {
    [0] = alias_sym_field_identifier,
    [4] = alias_sym_field_identifier,
  },
  [20] = {
    [4] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 9,
  [16] = 12,
  [17] = 17,
  [18] = 8,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 47,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 44,
  [67] = 67,
  [68] = 40,
  [69] = 46,
  [70] = 45,
  [71] = 71,
  [72] = 48,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 59,
  [85] = 61,
  [86] = 73,
  [87] = 71,
  [88] = 83,
  [89] = 60,
  [90] = 67,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 113,
  [120] = 115,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 148,
  [153] = 153,
  [154] = 145,
  [155] = 133,
  [156] = 134,
  [157] = 157,
  [158] = 125,
  [159] = 131,
  [160] = 147,
  [161] = 139,
  [162] = 162,
  [163] = 163,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_caveat_text);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_caveat_text);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_caveat_text);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_caveat_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_caveat_whitespace);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_caveat_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_caveat_string);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_caveat_string);
      if (lookahead == '"') ADVANCE(27);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_caveat_comment);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_caveat_comment);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_caveat_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_self_expression);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_caveat);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 29},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 29},
  [163] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_definition] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_expiration] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_permission] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_self_expression] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_caveat] = ACTIONS(1),
    [sym_caveat_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(126),
    [sym__statement_terminator] = STATE(2),
    [sym__top_level] = STATE(2),
    [sym_object_definition] = STATE(2),
    [sym_use_flag] = STATE(2),
    [sym_import] = STATE(2),
    [sym_partial_definition] = STATE(2),
    [sym_caveat_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_CR] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
    [anon_sym_definition] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_partial] = ACTIONS(17),
    [anon_sym_caveat] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_definition,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_partial,
    ACTIONS(19), 1,
      anon_sym_caveat,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_CR,
    ACTIONS(23), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
    STATE(3), 8,
      sym__statement_terminator,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [37] = 9,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_CR,
    ACTIONS(35), 1,
      anon_sym_definition,
    ACTIONS(38), 1,
      anon_sym_use,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(44), 1,
      anon_sym_partial,
    ACTIONS(47), 1,
      anon_sym_caveat,
    ACTIONS(29), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
    STATE(3), 8,
      sym__statement_terminator,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [74] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_relation,
    ACTIONS(60), 1,
      anon_sym_permission,
    STATE(54), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(36), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(56), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_relation,
    ACTIONS(60), 1,
      anon_sym_permission,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(36), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [144] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_relation,
    ACTIONS(60), 1,
      anon_sym_permission,
    ACTIONS(66), 1,
      anon_sym_CR,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(5), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [179] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_relation,
    ACTIONS(60), 1,
      anon_sym_permission,
    ACTIONS(72), 1,
      anon_sym_CR,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(4), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [214] = 9,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(58), 1,
      sym_arrow_expression,
    STATE(83), 1,
      sym_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(90), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [244] = 9,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(47), 1,
      sym_arrow_expression,
    STATE(73), 1,
      sym_permission_expr,
    STATE(60), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(67), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [274] = 9,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(47), 1,
      sym_arrow_expression,
    STATE(63), 1,
      sym_permission_expr,
    STATE(60), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(67), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [304] = 9,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(47), 1,
      sym_arrow_expression,
    STATE(61), 1,
      sym_permission_expr,
    STATE(60), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(67), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [334] = 9,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(58), 1,
      sym_arrow_expression,
    STATE(84), 1,
      sym_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(90), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [364] = 9,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(58), 1,
      sym_arrow_expression,
    STATE(85), 1,
      sym_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(90), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [394] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_CR,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_with,
    STATE(80), 1,
      sym_relation_trait,
    STATE(82), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [422] = 9,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(58), 1,
      sym_arrow_expression,
    STATE(86), 1,
      sym_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(90), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [452] = 9,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(47), 1,
      sym_arrow_expression,
    STATE(59), 1,
      sym_permission_expr,
    STATE(60), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(67), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [482] = 9,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(47), 1,
      sym_arrow_expression,
    STATE(65), 1,
      sym_permission_expr,
    STATE(60), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(67), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [512] = 9,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(58), 1,
      sym_arrow_expression,
    STATE(88), 1,
      sym_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(90), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [542] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [557] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(110), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [572] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(114), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [587] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(118), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      aux_sym_caveat_expr_repeat1,
    STATE(163), 1,
      sym_caveat_expr,
    ACTIONS(122), 2,
      sym_caveat_text,
      sym_caveat_string,
    ACTIONS(124), 2,
      sym_caveat_whitespace,
      sym_caveat_comment,
    STATE(37), 2,
      sym__caveat_content,
      sym_caveat_object,
  [627] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(128), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [642] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(132), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [657] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(136), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym__caveat_content,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat2,
    ACTIONS(140), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym__caveat_content,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat2,
    ACTIONS(140), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym__caveat_content,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat2,
    ACTIONS(149), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(28), 3,
      sym__caveat_content,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat2,
    ACTIONS(152), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [756] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      aux_sym_caveat_expr_repeat1,
    STATE(130), 1,
      sym_caveat_expr,
    ACTIONS(122), 2,
      sym_caveat_text,
      sym_caveat_string,
    ACTIONS(124), 2,
      sym_caveat_whitespace,
      sym_caveat_comment,
    STATE(37), 2,
      sym__caveat_content,
      sym_caveat_object,
  [781] = 2,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(156), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [796] = 2,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(160), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(36), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(162), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [832] = 2,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(166), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_CR,
    ACTIONS(168), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(36), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(174), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(27), 3,
      sym__caveat_content,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat2,
    ACTIONS(178), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [889] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(182), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [904] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(186), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_CR,
    ACTIONS(188), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [935] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(196), 1,
      anon_sym_relation,
    ACTIONS(198), 1,
      anon_sym_permission,
    STATE(50), 1,
      aux_sym_object_definition_repeat2,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(200), 2,
      sym_caveat_text,
      sym_caveat_string,
    ACTIONS(202), 2,
      sym_caveat_whitespace,
      sym_caveat_comment,
    STATE(30), 2,
      sym__caveat_content,
      sym_caveat_object,
  [981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
    ACTIONS(206), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_CR,
    ACTIONS(208), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_CR,
    ACTIONS(212), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_CR,
    ACTIONS(216), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_CR,
    ACTIONS(224), 1,
      anon_sym_DASH_GT,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(220), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_CR,
    ACTIONS(232), 1,
      anon_sym_DASH_GT,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(228), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
    ACTIONS(238), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [1109] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(245), 1,
      anon_sym_relation,
    ACTIONS(248), 1,
      anon_sym_permission,
    STATE(50), 1,
      aux_sym_object_definition_repeat2,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [1133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_CR,
    ACTIONS(102), 1,
      anon_sym_with,
    STATE(80), 1,
      sym_relation_trait,
    STATE(82), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1155] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(196), 1,
      anon_sym_relation,
    ACTIONS(198), 1,
      anon_sym_permission,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_definition_repeat2,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [1179] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(196), 1,
      anon_sym_relation,
    ACTIONS(198), 1,
      anon_sym_permission,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_definition_repeat2,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [1203] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(196), 1,
      anon_sym_relation,
    ACTIONS(198), 1,
      anon_sym_permission,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_definition_repeat2,
    STATE(77), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [1227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
    ACTIONS(262), 4,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [1247] = 6,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_relation_expr,
    STATE(96), 1,
      sym_relation_type,
    STATE(51), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(94), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1268] = 6,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_qualified_identifier,
    STATE(81), 1,
      sym_relation_expr,
    STATE(96), 1,
      sym_relation_type,
    STATE(51), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(94), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1289] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(222), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_CR,
    ACTIONS(275), 1,
      anon_sym_PLUS,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(271), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_CR,
    ACTIONS(279), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_CR,
    ACTIONS(275), 1,
      anon_sym_PLUS,
    ACTIONS(271), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_DASH,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [1367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_PLUS,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(287), 1,
      anon_sym_CR,
    ACTIONS(289), 1,
      anon_sym_DASH,
    ACTIONS(285), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_caveat_text,
      sym_caveat_whitespace,
      sym_caveat_string,
      sym_caveat_comment,
  [1399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_PLUS,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(289), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      anon_sym_CR,
    ACTIONS(293), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1419] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DASH,
    ACTIONS(210), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_CR,
    ACTIONS(297), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1447] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(190), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1461] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DASH,
    ACTIONS(218), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1475] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DASH,
    ACTIONS(214), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_CR,
    ACTIONS(301), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1503] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      anon_sym_DASH_GT,
    ACTIONS(307), 1,
      anon_sym_DOT,
    ACTIONS(230), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_CR,
    ACTIONS(271), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(311), 2,
      sym_caveat_whitespace,
      sym_caveat_comment,
    ACTIONS(309), 3,
      anon_sym_LBRACE,
      sym_caveat_text,
      sym_caveat_string,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_CR,
    ACTIONS(314), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_CR,
    ACTIONS(318), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_CR,
    ACTIONS(322), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(34), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_CR,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(326), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_CR,
    ACTIONS(332), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_CR,
    ACTIONS(336), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_CR,
    ACTIONS(340), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_CR,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1656] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(354), 1,
      anon_sym_DASH,
  [1672] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(273), 2,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [1686] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [1698] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(273), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1708] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1718] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(354), 1,
      anon_sym_DASH,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [1734] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1744] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_CR,
    ACTIONS(358), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1766] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LT,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_CR,
    ACTIONS(366), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_CR,
    ACTIONS(370), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_CR,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(374), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_CR,
    ACTIONS(380), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1828] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1837] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(116), 1,
      sym_parameter,
    STATE(124), 1,
      sym_parameter_identifier,
  [1850] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_GT,
    STATE(102), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1863] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_GT,
    STATE(100), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1876] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1885] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_GT,
    STATE(100), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1898] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(403), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1911] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_caveat_definition_repeat1,
  [1924] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(412), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_permission_type_annotation,
  [1937] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_caveat_definition_repeat1,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_CR,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1961] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(106), 1,
      sym_parameter,
    STATE(124), 1,
      sym_parameter_identifier,
  [1974] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_EQ,
    STATE(111), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1987] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_caveat_definition_repeat1,
  [2000] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    ACTIONS(429), 1,
      anon_sym_EQ,
    STATE(111), 1,
      aux_sym_permission_type_annotation_repeat1,
  [2013] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [2021] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_any,
      anon_sym_all,
  [2029] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(99), 1,
      sym_parameter_type_identifier,
  [2039] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_any,
      anon_sym_all,
  [2047] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2055] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DOT_DOT_DOT,
  [2065] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2073] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_any,
      anon_sym_all,
  [2081] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_any,
      anon_sym_all,
  [2089] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2097] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_qualified_identifier,
    ACTIONS(449), 1,
      anon_sym_expiration,
  [2107] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(121), 1,
      sym_parameter_type_identifier,
  [2117] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(118), 1,
      sym_parameter_type_identifier,
  [2127] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [2134] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
  [2141] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [2148] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [2155] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_expiration,
  [2162] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
  [2169] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
  [2176] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_STAR,
  [2183] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [2190] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [2197] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [2204] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [2211] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [2218] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
  [2225] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
  [2232] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
  [2239] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [2246] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
  [2253] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
  [2260] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_qualified_identifier,
  [2267] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_identifier,
  [2274] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_qualified_identifier,
  [2281] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
  [2288] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
  [2295] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_identifier,
  [2302] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_qualified_identifier,
  [2309] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_string_literal,
  [2316] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [2323] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [2330] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_identifier,
  [2337] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [2344] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [2351] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [2358] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [2365] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
  [2372] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
  [2379] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [2386] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_EQ,
  [2393] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 364,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 452,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 572,
  [SMALL_STATE(22)] = 587,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 627,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 672,
  [SMALL_STATE(28)] = 693,
  [SMALL_STATE(29)] = 714,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 781,
  [SMALL_STATE(33)] = 796,
  [SMALL_STATE(34)] = 811,
  [SMALL_STATE(35)] = 832,
  [SMALL_STATE(36)] = 847,
  [SMALL_STATE(37)] = 868,
  [SMALL_STATE(38)] = 889,
  [SMALL_STATE(39)] = 904,
  [SMALL_STATE(40)] = 919,
  [SMALL_STATE(41)] = 935,
  [SMALL_STATE(42)] = 959,
  [SMALL_STATE(43)] = 981,
  [SMALL_STATE(44)] = 1001,
  [SMALL_STATE(45)] = 1017,
  [SMALL_STATE(46)] = 1033,
  [SMALL_STATE(47)] = 1049,
  [SMALL_STATE(48)] = 1069,
  [SMALL_STATE(49)] = 1089,
  [SMALL_STATE(50)] = 1109,
  [SMALL_STATE(51)] = 1133,
  [SMALL_STATE(52)] = 1155,
  [SMALL_STATE(53)] = 1179,
  [SMALL_STATE(54)] = 1203,
  [SMALL_STATE(55)] = 1227,
  [SMALL_STATE(56)] = 1247,
  [SMALL_STATE(57)] = 1268,
  [SMALL_STATE(58)] = 1289,
  [SMALL_STATE(59)] = 1307,
  [SMALL_STATE(60)] = 1325,
  [SMALL_STATE(61)] = 1339,
  [SMALL_STATE(62)] = 1355,
  [SMALL_STATE(63)] = 1367,
  [SMALL_STATE(64)] = 1387,
  [SMALL_STATE(65)] = 1399,
  [SMALL_STATE(66)] = 1419,
  [SMALL_STATE(67)] = 1433,
  [SMALL_STATE(68)] = 1447,
  [SMALL_STATE(69)] = 1461,
  [SMALL_STATE(70)] = 1475,
  [SMALL_STATE(71)] = 1489,
  [SMALL_STATE(72)] = 1503,
  [SMALL_STATE(73)] = 1521,
  [SMALL_STATE(74)] = 1535,
  [SMALL_STATE(75)] = 1551,
  [SMALL_STATE(76)] = 1564,
  [SMALL_STATE(77)] = 1577,
  [SMALL_STATE(78)] = 1592,
  [SMALL_STATE(79)] = 1607,
  [SMALL_STATE(80)] = 1620,
  [SMALL_STATE(81)] = 1632,
  [SMALL_STATE(82)] = 1644,
  [SMALL_STATE(83)] = 1656,
  [SMALL_STATE(84)] = 1672,
  [SMALL_STATE(85)] = 1686,
  [SMALL_STATE(86)] = 1698,
  [SMALL_STATE(87)] = 1708,
  [SMALL_STATE(88)] = 1718,
  [SMALL_STATE(89)] = 1734,
  [SMALL_STATE(90)] = 1744,
  [SMALL_STATE(91)] = 1754,
  [SMALL_STATE(92)] = 1766,
  [SMALL_STATE(93)] = 1778,
  [SMALL_STATE(94)] = 1790,
  [SMALL_STATE(95)] = 1802,
  [SMALL_STATE(96)] = 1816,
  [SMALL_STATE(97)] = 1828,
  [SMALL_STATE(98)] = 1837,
  [SMALL_STATE(99)] = 1850,
  [SMALL_STATE(100)] = 1863,
  [SMALL_STATE(101)] = 1876,
  [SMALL_STATE(102)] = 1885,
  [SMALL_STATE(103)] = 1898,
  [SMALL_STATE(104)] = 1911,
  [SMALL_STATE(105)] = 1924,
  [SMALL_STATE(106)] = 1937,
  [SMALL_STATE(107)] = 1950,
  [SMALL_STATE(108)] = 1961,
  [SMALL_STATE(109)] = 1974,
  [SMALL_STATE(110)] = 1987,
  [SMALL_STATE(111)] = 2000,
  [SMALL_STATE(112)] = 2013,
  [SMALL_STATE(113)] = 2021,
  [SMALL_STATE(114)] = 2029,
  [SMALL_STATE(115)] = 2039,
  [SMALL_STATE(116)] = 2047,
  [SMALL_STATE(117)] = 2055,
  [SMALL_STATE(118)] = 2065,
  [SMALL_STATE(119)] = 2073,
  [SMALL_STATE(120)] = 2081,
  [SMALL_STATE(121)] = 2089,
  [SMALL_STATE(122)] = 2097,
  [SMALL_STATE(123)] = 2107,
  [SMALL_STATE(124)] = 2117,
  [SMALL_STATE(125)] = 2127,
  [SMALL_STATE(126)] = 2134,
  [SMALL_STATE(127)] = 2141,
  [SMALL_STATE(128)] = 2148,
  [SMALL_STATE(129)] = 2155,
  [SMALL_STATE(130)] = 2162,
  [SMALL_STATE(131)] = 2169,
  [SMALL_STATE(132)] = 2176,
  [SMALL_STATE(133)] = 2183,
  [SMALL_STATE(134)] = 2190,
  [SMALL_STATE(135)] = 2197,
  [SMALL_STATE(136)] = 2204,
  [SMALL_STATE(137)] = 2211,
  [SMALL_STATE(138)] = 2218,
  [SMALL_STATE(139)] = 2225,
  [SMALL_STATE(140)] = 2232,
  [SMALL_STATE(141)] = 2239,
  [SMALL_STATE(142)] = 2246,
  [SMALL_STATE(143)] = 2253,
  [SMALL_STATE(144)] = 2260,
  [SMALL_STATE(145)] = 2267,
  [SMALL_STATE(146)] = 2274,
  [SMALL_STATE(147)] = 2281,
  [SMALL_STATE(148)] = 2288,
  [SMALL_STATE(149)] = 2295,
  [SMALL_STATE(150)] = 2302,
  [SMALL_STATE(151)] = 2309,
  [SMALL_STATE(152)] = 2316,
  [SMALL_STATE(153)] = 2323,
  [SMALL_STATE(154)] = 2330,
  [SMALL_STATE(155)] = 2337,
  [SMALL_STATE(156)] = 2344,
  [SMALL_STATE(157)] = 2351,
  [SMALL_STATE(158)] = 2358,
  [SMALL_STATE(159)] = 2365,
  [SMALL_STATE(160)] = 2372,
  [SMALL_STATE(161)] = 2379,
  [SMALL_STATE(162)] = 2386,
  [SMALL_STATE(163)] = 2393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 3),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat2, 2), SHIFT_REPEAT(43),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat2, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat2, 2), SHIFT_REPEAT(29),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(36),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(36),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(137),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(136),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(135),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(43),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_permission_expr, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_permission_expr, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 4, .production_id = 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 5, .production_id = 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 13),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_expr, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(74),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_type, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_relation_expr, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_trait, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expiration_trait, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_expr, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 10),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_relation_expr, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(123),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(98),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [453] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_spicedb(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
