#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

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
  aux_sym_caveat_expr_token1 = 40,
  sym_caveat_string = 41,
  aux_sym_caveat_object_token1 = 42,
  sym_source_file = 43,
  sym__statement_terminator = 44,
  sym__top_level = 45,
  sym_parameter_identifier = 46,
  sym_parameter_type_identifier = 47,
  sym_object_definition = 48,
  sym_use_flag = 49,
  sym_import = 50,
  sym_partial_definition = 51,
  sym_partial_reference = 52,
  sym_relation_type = 53,
  sym_wildcard_type = 54,
  sym_reference_type = 55,
  sym_relation_trait = 56,
  sym_expiration_trait = 57,
  sym_caveat_with_expiration = 58,
  sym_userset = 59,
  sym_arrow_expression = 60,
  sym_relation = 61,
  sym_relation_expr = 62,
  sym_unary_relation_expr = 63,
  sym_binary_relation_expr = 64,
  sym_permission = 65,
  sym_permission_type_annotation = 66,
  sym_permission_expr = 67,
  sym_unary_permission_expr = 68,
  sym_parenthesized_permission_expression = 69,
  sym_binary_permission_expr = 70,
  sym_caveat_definition = 71,
  sym_parameter = 72,
  sym_caveat_expr = 73,
  sym_caveat_object = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_parameter_type_identifier_repeat1 = 76,
  aux_sym_object_definition_repeat1 = 77,
  aux_sym_object_definition_repeat2 = 78,
  aux_sym_permission_type_annotation_repeat1 = 79,
  aux_sym_caveat_definition_repeat1 = 80,
  aux_sym_caveat_expr_repeat1 = 81,
  aux_sym_caveat_object_repeat1 = 82,
  alias_sym_cel_type_identifier = 83,
  alias_sym_cel_variable_identifier = 84,
  alias_sym_field_identifier = 85,
  alias_sym_func_identifier = 86,
  alias_sym_method_identifier = 87,
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
  [aux_sym_caveat_expr_token1] = "caveat_expr_token1",
  [sym_caveat_string] = "caveat_string",
  [aux_sym_caveat_object_token1] = "caveat_object_token1",
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
  [sym_caveat_object] = "caveat_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_type_identifier_repeat1] = "parameter_type_identifier_repeat1",
  [aux_sym_object_definition_repeat1] = "object_definition_repeat1",
  [aux_sym_object_definition_repeat2] = "object_definition_repeat2",
  [aux_sym_permission_type_annotation_repeat1] = "permission_type_annotation_repeat1",
  [aux_sym_caveat_definition_repeat1] = "caveat_definition_repeat1",
  [aux_sym_caveat_expr_repeat1] = "caveat_expr_repeat1",
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
  [aux_sym_caveat_expr_token1] = aux_sym_caveat_expr_token1,
  [sym_caveat_string] = sym_caveat_string,
  [aux_sym_caveat_object_token1] = aux_sym_caveat_object_token1,
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
  [sym_caveat_object] = sym_caveat_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_type_identifier_repeat1] = aux_sym_parameter_type_identifier_repeat1,
  [aux_sym_object_definition_repeat1] = aux_sym_object_definition_repeat1,
  [aux_sym_object_definition_repeat2] = aux_sym_object_definition_repeat2,
  [aux_sym_permission_type_annotation_repeat1] = aux_sym_permission_type_annotation_repeat1,
  [aux_sym_caveat_definition_repeat1] = aux_sym_caveat_definition_repeat1,
  [aux_sym_caveat_expr_repeat1] = aux_sym_caveat_expr_repeat1,
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
  [aux_sym_caveat_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_caveat_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_caveat_object_token1] = {
    .visible = false,
    .named = false,
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
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 3},
  [15] = {.index = 18, .length = 3},
  [19] = {.index = 21, .length = 4},
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
    {field_expr, 5},
    {field_name, 1},
  [15] =
    {field_expr, 4},
    {field_name, 1},
    {field_type, 2},
  [18] =
    {field_expr, 6},
    {field_name, 1},
    {field_parameters, 3},
  [21] =
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
    [1] = alias_sym_func_identifier,
  },
  [14] = {
    [1] = alias_sym_method_identifier,
  },
  [15] = {
    [1] = alias_sym_func_identifier,
  },
  [16] = {
    [2] = alias_sym_field_identifier,
  },
  [17] = {
    [1] = alias_sym_func_identifier,
  },
  [18] = {
    [0] = alias_sym_field_identifier,
    [2] = alias_sym_field_identifier,
  },
  [19] = {
    [1] = alias_sym_func_identifier,
  },
  [20] = {
    [0] = alias_sym_field_identifier,
    [4] = alias_sym_field_identifier,
  },
  [21] = {
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
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 9,
  [17] = 10,
  [18] = 11,
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
  [52] = 35,
  [53] = 45,
  [54] = 44,
  [55] = 55,
  [56] = 42,
  [57] = 34,
  [58] = 43,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 71,
  [77] = 51,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 61,
  [86] = 86,
  [87] = 87,
  [88] = 50,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 60,
  [93] = 59,
  [94] = 94,
  [95] = 48,
  [96] = 91,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 83,
  [104] = 104,
  [105] = 105,
  [106] = 94,
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
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 121,
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
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 153,
  [158] = 132,
  [159] = 133,
  [160] = 160,
  [161] = 129,
  [162] = 130,
  [163] = 145,
  [164] = 140,
  [165] = 165,
  [166] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(22);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_caveat_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
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
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(135),
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
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(60), 1,
      anon_sym_relation,
    ACTIONS(62), 1,
      anon_sym_permission,
    STATE(40), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(30), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [109] = 10,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(60), 1,
      anon_sym_relation,
    ACTIONS(62), 1,
      anon_sym_permission,
    ACTIONS(66), 1,
      anon_sym_CR,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(7), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [144] = 10,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(60), 1,
      anon_sym_relation,
    ACTIONS(62), 1,
      anon_sym_permission,
    ACTIONS(72), 1,
      anon_sym_CR,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(4), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [179] = 10,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(60), 1,
      anon_sym_relation,
    ACTIONS(62), 1,
      anon_sym_permission,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(30), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [214] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(57), 1,
      sym_arrow_expression,
    STATE(91), 1,
      sym_permission_expr,
    STATE(77), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(88), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(57), 1,
      sym_arrow_expression,
    STATE(95), 1,
      sym_permission_expr,
    STATE(77), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(88), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [274] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(57), 1,
      sym_arrow_expression,
    STATE(93), 1,
      sym_permission_expr,
    STATE(77), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(88), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [304] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(57), 1,
      sym_arrow_expression,
    STATE(92), 1,
      sym_permission_expr,
    STATE(77), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(88), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_nil,
    ACTIONS(84), 1,
      sym_self_expression,
    STATE(57), 1,
      sym_arrow_expression,
    STATE(96), 1,
      sym_permission_expr,
    STATE(77), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(88), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [364] = 8,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_CR,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_with,
    STATE(89), 1,
      sym_relation_trait,
    STATE(90), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [392] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(34), 1,
      sym_arrow_expression,
    STATE(64), 1,
      sym_permission_expr,
    STATE(50), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(34), 1,
      sym_arrow_expression,
    STATE(62), 1,
      sym_permission_expr,
    STATE(50), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [452] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(34), 1,
      sym_arrow_expression,
    STATE(48), 1,
      sym_permission_expr,
    STATE(50), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [482] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(34), 1,
      sym_arrow_expression,
    STATE(59), 1,
      sym_permission_expr,
    STATE(50), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [512] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(34), 1,
      sym_arrow_expression,
    STATE(60), 1,
      sym_permission_expr,
    STATE(50), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(51), 2,
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
  [602] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(122), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [617] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(126), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [632] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(130), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [647] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(134), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [662] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(138), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [677] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(142), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [692] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(146), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [707] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_CR,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(30), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [728] = 5,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(30), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(156), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [749] = 2,
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
  [764] = 2,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(164), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [779] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_CR,
    ACTIONS(170), 1,
      anon_sym_DASH_GT,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(166), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [799] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_CR,
    ACTIONS(174), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [815] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_CR,
    ACTIONS(94), 1,
      anon_sym_with,
    STATE(89), 1,
      sym_relation_trait,
    STATE(90), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_relation,
    ACTIONS(184), 1,
      anon_sym_permission,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [861] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(191), 1,
      anon_sym_relation,
    ACTIONS(194), 1,
      anon_sym_permission,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [885] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_relation,
    ACTIONS(184), 1,
      anon_sym_permission,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [909] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_relation,
    ACTIONS(184), 1,
      anon_sym_permission,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_relation,
    ACTIONS(184), 1,
      anon_sym_permission,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(73), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [957] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_CR,
    ACTIONS(203), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [973] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_CR,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [993] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_CR,
    ACTIONS(215), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1009] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_CR,
    ACTIONS(219), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_relation_type,
    STATE(80), 1,
      sym_relation_expr,
    STATE(36), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(81), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_relation_type,
    STATE(82), 1,
      sym_relation_expr,
    STATE(36), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(81), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1067] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_CR,
    ACTIONS(229), 1,
      anon_sym_PLUS,
    ACTIONS(231), 1,
      anon_sym_AMP,
    ACTIONS(225), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH,
  [1085] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_caveat_expr,
    ACTIONS(235), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(65), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1103] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_CR,
    ACTIONS(237), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1117] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_CR,
    ACTIONS(241), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DASH,
    ACTIONS(221), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(217), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1173] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_caveat_expr,
    ACTIONS(235), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(65), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(205), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(168), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1223] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(249), 1,
      anon_sym_DASH_GT,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(209), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1241] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_CR,
    ACTIONS(229), 1,
      anon_sym_PLUS,
    ACTIONS(225), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_DASH,
  [1257] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_CR,
    ACTIONS(225), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1271] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_CR,
    ACTIONS(253), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1285] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_PLUS,
    ACTIONS(231), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      anon_sym_CR,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1305] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(63), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1323] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_PLUS,
    ACTIONS(231), 1,
      anon_sym_AMP,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(273), 1,
      anon_sym_CR,
    ACTIONS(271), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1343] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(63), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1361] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_caveat_expr,
    ACTIONS(235), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(65), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1379] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_CR,
    ACTIONS(279), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1392] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_CR,
    ACTIONS(283), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1405] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      aux_sym_caveat_object_token1,
    STATE(69), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1422] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_CR,
    ACTIONS(295), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1435] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      aux_sym_caveat_object_token1,
    STATE(69), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1452] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      aux_sym_caveat_object_token1,
    STATE(71), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1469] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_CR,
    ACTIONS(309), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(31), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
  [1484] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_CR,
    ACTIONS(317), 1,
      anon_sym_and,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1499] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      aux_sym_caveat_object_token1,
    STATE(76), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1516] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      aux_sym_caveat_object_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(69), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_parameter,
    STATE(113), 1,
      sym_parameter_identifier,
  [1559] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_CR,
    ACTIONS(329), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1571] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_CR,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(333), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1585] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_CR,
    ACTIONS(339), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1597] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_CR,
    ACTIONS(343), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1609] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(347), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1619] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_CR,
    ACTIONS(349), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1641] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(353), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1675] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_CR,
    ACTIONS(361), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1687] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_CR,
    ACTIONS(365), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_PLUS,
    ACTIONS(373), 1,
      anon_sym_AMP,
    ACTIONS(375), 1,
      anon_sym_DASH,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PLUS,
    ACTIONS(227), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [1737] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(377), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PLUS,
    ACTIONS(373), 1,
      anon_sym_AMP,
    ACTIONS(227), 2,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [1761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PLUS,
    ACTIONS(373), 1,
      anon_sym_AMP,
    ACTIONS(375), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [1777] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_CR,
    ACTIONS(381), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym_permission_type_annotation,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_caveat_definition_repeat1,
  [1814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(107), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(113), 1,
      sym_parameter_identifier,
    STATE(117), 1,
      sym_parameter,
  [1840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_GT,
    STATE(102), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1853] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_GT,
    STATE(102), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1884] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(409), 1,
      anon_sym_EQ,
    STATE(112), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_caveat_definition_repeat1,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_caveat_definition_repeat1,
  [1932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_EQ,
    STATE(112), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(116), 1,
      sym_parameter_type_identifier,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(111), 1,
      sym_parameter_type_identifier,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_any,
      anon_sym_all,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(124), 1,
      sym_parameter_type_identifier,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_any,
      anon_sym_all,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_any,
      anon_sym_all,
  [2045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_qualified_identifier,
    ACTIONS(438), 1,
      anon_sym_expiration,
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT_DOT,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_any,
      anon_sym_all,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_expiration,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_identifier,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [2179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_qualified_identifier,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_qualified_identifier,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_string_literal,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_EQ,
  [2214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [2235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [2263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_identifier,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [2291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [2305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [2312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [2333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
  [2347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_qualified_identifier,
  [2361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_STAR,
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
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 452,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 572,
  [SMALL_STATE(22)] = 587,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 677,
  [SMALL_STATE(29)] = 692,
  [SMALL_STATE(30)] = 707,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 764,
  [SMALL_STATE(34)] = 779,
  [SMALL_STATE(35)] = 799,
  [SMALL_STATE(36)] = 815,
  [SMALL_STATE(37)] = 837,
  [SMALL_STATE(38)] = 861,
  [SMALL_STATE(39)] = 885,
  [SMALL_STATE(40)] = 909,
  [SMALL_STATE(41)] = 933,
  [SMALL_STATE(42)] = 957,
  [SMALL_STATE(43)] = 973,
  [SMALL_STATE(44)] = 993,
  [SMALL_STATE(45)] = 1009,
  [SMALL_STATE(46)] = 1025,
  [SMALL_STATE(47)] = 1046,
  [SMALL_STATE(48)] = 1067,
  [SMALL_STATE(49)] = 1085,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1117,
  [SMALL_STATE(52)] = 1131,
  [SMALL_STATE(53)] = 1145,
  [SMALL_STATE(54)] = 1159,
  [SMALL_STATE(55)] = 1173,
  [SMALL_STATE(56)] = 1191,
  [SMALL_STATE(57)] = 1205,
  [SMALL_STATE(58)] = 1223,
  [SMALL_STATE(59)] = 1241,
  [SMALL_STATE(60)] = 1257,
  [SMALL_STATE(61)] = 1271,
  [SMALL_STATE(62)] = 1285,
  [SMALL_STATE(63)] = 1305,
  [SMALL_STATE(64)] = 1323,
  [SMALL_STATE(65)] = 1343,
  [SMALL_STATE(66)] = 1361,
  [SMALL_STATE(67)] = 1379,
  [SMALL_STATE(68)] = 1392,
  [SMALL_STATE(69)] = 1405,
  [SMALL_STATE(70)] = 1422,
  [SMALL_STATE(71)] = 1435,
  [SMALL_STATE(72)] = 1452,
  [SMALL_STATE(73)] = 1469,
  [SMALL_STATE(74)] = 1484,
  [SMALL_STATE(75)] = 1499,
  [SMALL_STATE(76)] = 1516,
  [SMALL_STATE(77)] = 1533,
  [SMALL_STATE(78)] = 1543,
  [SMALL_STATE(79)] = 1559,
  [SMALL_STATE(80)] = 1571,
  [SMALL_STATE(81)] = 1585,
  [SMALL_STATE(82)] = 1597,
  [SMALL_STATE(83)] = 1609,
  [SMALL_STATE(84)] = 1619,
  [SMALL_STATE(85)] = 1631,
  [SMALL_STATE(86)] = 1641,
  [SMALL_STATE(87)] = 1653,
  [SMALL_STATE(88)] = 1665,
  [SMALL_STATE(89)] = 1675,
  [SMALL_STATE(90)] = 1687,
  [SMALL_STATE(91)] = 1699,
  [SMALL_STATE(92)] = 1715,
  [SMALL_STATE(93)] = 1725,
  [SMALL_STATE(94)] = 1737,
  [SMALL_STATE(95)] = 1747,
  [SMALL_STATE(96)] = 1761,
  [SMALL_STATE(97)] = 1777,
  [SMALL_STATE(98)] = 1788,
  [SMALL_STATE(99)] = 1801,
  [SMALL_STATE(100)] = 1814,
  [SMALL_STATE(101)] = 1827,
  [SMALL_STATE(102)] = 1840,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1862,
  [SMALL_STATE(105)] = 1871,
  [SMALL_STATE(106)] = 1884,
  [SMALL_STATE(107)] = 1893,
  [SMALL_STATE(108)] = 1906,
  [SMALL_STATE(109)] = 1919,
  [SMALL_STATE(110)] = 1932,
  [SMALL_STATE(111)] = 1941,
  [SMALL_STATE(112)] = 1954,
  [SMALL_STATE(113)] = 1967,
  [SMALL_STATE(114)] = 1977,
  [SMALL_STATE(115)] = 1985,
  [SMALL_STATE(116)] = 1995,
  [SMALL_STATE(117)] = 2003,
  [SMALL_STATE(118)] = 2011,
  [SMALL_STATE(119)] = 2019,
  [SMALL_STATE(120)] = 2029,
  [SMALL_STATE(121)] = 2037,
  [SMALL_STATE(122)] = 2045,
  [SMALL_STATE(123)] = 2055,
  [SMALL_STATE(124)] = 2065,
  [SMALL_STATE(125)] = 2073,
  [SMALL_STATE(126)] = 2081,
  [SMALL_STATE(127)] = 2088,
  [SMALL_STATE(128)] = 2095,
  [SMALL_STATE(129)] = 2102,
  [SMALL_STATE(130)] = 2109,
  [SMALL_STATE(131)] = 2116,
  [SMALL_STATE(132)] = 2123,
  [SMALL_STATE(133)] = 2130,
  [SMALL_STATE(134)] = 2137,
  [SMALL_STATE(135)] = 2144,
  [SMALL_STATE(136)] = 2151,
  [SMALL_STATE(137)] = 2158,
  [SMALL_STATE(138)] = 2165,
  [SMALL_STATE(139)] = 2172,
  [SMALL_STATE(140)] = 2179,
  [SMALL_STATE(141)] = 2186,
  [SMALL_STATE(142)] = 2193,
  [SMALL_STATE(143)] = 2200,
  [SMALL_STATE(144)] = 2207,
  [SMALL_STATE(145)] = 2214,
  [SMALL_STATE(146)] = 2221,
  [SMALL_STATE(147)] = 2228,
  [SMALL_STATE(148)] = 2235,
  [SMALL_STATE(149)] = 2242,
  [SMALL_STATE(150)] = 2249,
  [SMALL_STATE(151)] = 2256,
  [SMALL_STATE(152)] = 2263,
  [SMALL_STATE(153)] = 2270,
  [SMALL_STATE(154)] = 2277,
  [SMALL_STATE(155)] = 2284,
  [SMALL_STATE(156)] = 2291,
  [SMALL_STATE(157)] = 2298,
  [SMALL_STATE(158)] = 2305,
  [SMALL_STATE(159)] = 2312,
  [SMALL_STATE(160)] = 2319,
  [SMALL_STATE(161)] = 2326,
  [SMALL_STATE(162)] = 2333,
  [SMALL_STATE(163)] = 2340,
  [SMALL_STATE(164)] = 2347,
  [SMALL_STATE(165)] = 2354,
  [SMALL_STATE(166)] = 2361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 19),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 9, .production_id = 19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 8, .production_id = 15),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 13),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 7, .production_id = 13),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(30),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(30),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(146),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(150),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(151),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_permission_expr, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_permission_expr, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_expr, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 5, .production_id = 14),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 14),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(72),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(63),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 4, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_type, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3, .production_id = 16),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 16),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(75),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(69),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 17),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 17),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_relation_expr, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 10),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_expr, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_relation_expr, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expiration_trait, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 17),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 17),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_trait, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(101),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(119),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(156),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [464] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
