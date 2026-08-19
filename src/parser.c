#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
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
  aux_sym_caveat_expr_token1 = 40,
  sym_caveat_string = 41,
  sym_caveat_comment = 42,
  aux_sym_caveat_object_token1 = 43,
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
  sym_caveat_object = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_parameter_type_identifier_repeat1 = 77,
  aux_sym_object_definition_repeat1 = 78,
  aux_sym_object_definition_repeat2 = 79,
  aux_sym_permission_type_annotation_repeat1 = 80,
  aux_sym_caveat_definition_repeat1 = 81,
  aux_sym_caveat_expr_repeat1 = 82,
  aux_sym_caveat_object_repeat1 = 83,
  alias_sym_cel_type_identifier = 84,
  alias_sym_cel_variable_identifier = 85,
  alias_sym_field_identifier = 86,
  alias_sym_func_identifier = 87,
  alias_sym_method_identifier = 88,
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
  [sym_caveat_comment] = "caveat_comment",
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
  [sym_caveat_comment] = sym_caveat_comment,
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
  [sym_caveat_comment] = {
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
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 10,
  [18] = 15,
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
  [55] = 42,
  [56] = 56,
  [57] = 35,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 44,
  [62] = 62,
  [63] = 34,
  [64] = 40,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 68,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 56,
  [82] = 54,
  [83] = 59,
  [84] = 53,
  [85] = 58,
  [86] = 51,
  [87] = 79,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 66,
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
  [106] = 69,
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
  [120] = 120,
  [121] = 111,
  [122] = 114,
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
  [150] = 141,
  [151] = 151,
  [152] = 133,
  [153] = 153,
  [154] = 124,
  [155] = 130,
  [156] = 156,
  [157] = 127,
  [158] = 128,
  [159] = 125,
  [160] = 137,
  [161] = 161,
  [162] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_caveat_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_caveat_string);
      if (lookahead == '"') ADVANCE(28);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_caveat_comment);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_caveat_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(92);
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
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 30},
  [110] = {.lex_state = 30},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 30},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 30},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 30},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 30},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 30},
  [139] = {.lex_state = 30},
  [140] = {.lex_state = 30},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 30},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 30},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 30},
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
    [sym_source_file] = STATE(147),
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
    STATE(41), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(27), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(37), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(27), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(5), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(4), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [214] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_CR,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      anon_sym_with,
    STATE(80), 1,
      sym_relation_trait,
    STATE(77), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(76), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [242] = 9,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_nil,
    ACTIONS(94), 1,
      sym_self_expression,
    STATE(64), 1,
      sym_arrow_expression,
    STATE(79), 1,
      sym_permission_expr,
    STATE(85), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(86), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [272] = 9,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(40), 1,
      sym_arrow_expression,
    STATE(59), 1,
      sym_permission_expr,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(58), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [302] = 9,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(40), 1,
      sym_arrow_expression,
    STATE(62), 1,
      sym_permission_expr,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(58), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [332] = 9,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_nil,
    ACTIONS(94), 1,
      sym_self_expression,
    STATE(64), 1,
      sym_arrow_expression,
    STATE(87), 1,
      sym_permission_expr,
    STATE(85), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(86), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [362] = 9,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(40), 1,
      sym_arrow_expression,
    STATE(54), 1,
      sym_permission_expr,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(58), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [392] = 9,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(40), 1,
      sym_arrow_expression,
    STATE(52), 1,
      sym_permission_expr,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(58), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [422] = 9,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_nil,
    ACTIONS(94), 1,
      sym_self_expression,
    STATE(64), 1,
      sym_arrow_expression,
    STATE(81), 1,
      sym_permission_expr,
    STATE(85), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(86), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [452] = 9,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_nil,
    ACTIONS(94), 1,
      sym_self_expression,
    STATE(64), 1,
      sym_arrow_expression,
    STATE(82), 1,
      sym_permission_expr,
    STATE(85), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(86), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [482] = 9,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_nil,
    ACTIONS(94), 1,
      sym_self_expression,
    STATE(64), 1,
      sym_arrow_expression,
    STATE(83), 1,
      sym_permission_expr,
    STATE(85), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(86), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [512] = 9,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_nil,
    ACTIONS(102), 1,
      sym_self_expression,
    STATE(40), 1,
      sym_arrow_expression,
    STATE(56), 1,
      sym_permission_expr,
    STATE(51), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(58), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
  [662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_CR,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(27), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [683] = 2,
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
  [698] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(150), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [713] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(154), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(27), 2,
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
  [764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_CR,
    ACTIONS(84), 1,
      anon_sym_with,
    STATE(80), 1,
      sym_relation_trait,
    STATE(77), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(76), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_CR,
    ACTIONS(166), 1,
      anon_sym_DASH_GT,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(162), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_CR,
    ACTIONS(170), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [822] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [846] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [870] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [894] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(191), 1,
      anon_sym_relation,
    ACTIONS(194), 1,
      anon_sym_permission,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_CR,
    ACTIONS(201), 1,
      anon_sym_DASH_GT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(197), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [938] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_CR,
    ACTIONS(207), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_CR,
    ACTIONS(211), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [994] = 3,
    ACTIONS(3), 1,
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
  [1010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_caveat_expr,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(221), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(228), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1048] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_caveat_expr,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(221), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1067] = 6,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_qualified_identifier,
    STATE(78), 1,
      sym_relation_type,
    STATE(92), 1,
      sym_relation_expr,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(93), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(235), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1107] = 6,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_qualified_identifier,
    STATE(78), 1,
      sym_relation_type,
    STATE(90), 1,
      sym_relation_expr,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(93), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_CR,
    ACTIONS(237), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_CR,
    ACTIONS(245), 1,
      anon_sym_PLUS,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(241), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_CR,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_CR,
    ACTIONS(255), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_DASH,
  [1192] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PLUS,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_CR,
    ACTIONS(255), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH,
  [1224] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_CR,
    ACTIONS(259), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_CR,
    ACTIONS(255), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1266] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1280] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(217), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PLUS,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_CR,
    ACTIONS(263), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1314] = 5,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(164), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1332] = 5,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DASH_GT,
    ACTIONS(273), 1,
      anon_sym_DOT,
    ACTIONS(199), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_CR,
    ACTIONS(275), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(31), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      aux_sym_caveat_object_token1,
    STATE(67), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      aux_sym_caveat_object_token1,
    STATE(67), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_CR,
    ACTIONS(297), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_CR,
    ACTIONS(301), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      aux_sym_caveat_object_token1,
    STATE(75), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      aux_sym_caveat_object_token1,
    STATE(68), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_CR,
    ACTIONS(317), 1,
      anon_sym_and,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      aux_sym_caveat_object_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_CR,
    ACTIONS(321), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_CR,
    ACTIONS(325), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_CR,
    ACTIONS(329), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1550] = 5,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym_PLUS,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_DASH,
  [1566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1578] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_PLUS,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(257), 2,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [1592] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_PLUS,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [1604] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1614] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1624] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1634] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(239), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1644] = 5,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_PLUS,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [1660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_CR,
    ACTIONS(347), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1672] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(353), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_CR,
    ACTIONS(355), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_CR,
    ACTIONS(359), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_CR,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_CR,
    ACTIONS(369), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1734] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_GT,
    STATE(94), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1756] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_GT,
    STATE(100), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1769] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    ACTIONS(384), 1,
      anon_sym_EQ,
    STATE(107), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1782] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_caveat_definition_repeat1,
  [1795] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1804] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_GT,
    STATE(94), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1817] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_caveat_definition_repeat1,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_CR,
    ACTIONS(399), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1841] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1850] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_permission_type_annotation,
  [1863] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(119), 1,
      sym_parameter,
    STATE(123), 1,
      sym_parameter_identifier,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1885] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1898] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameter,
    STATE(123), 1,
      sym_parameter_identifier,
  [1911] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1924] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_caveat_definition_repeat1,
  [1937] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_any,
      anon_sym_all,
  [1945] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(118), 1,
      sym_parameter_type_identifier,
  [1955] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1963] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_any,
      anon_sym_all,
  [1971] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1979] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_qualified_identifier,
    ACTIONS(430), 1,
      anon_sym_expiration,
  [1989] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(96), 1,
      sym_parameter_type_identifier,
  [1999] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2007] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2015] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_DOT_DOT_DOT,
  [2025] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_any,
      anon_sym_all,
  [2033] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_any,
      anon_sym_all,
  [2041] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parameter_type_identifier,
  [2051] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [2058] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
  [2065] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_expiration,
  [2072] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [2079] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_identifier,
  [2086] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [2093] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
  [2100] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
  [2107] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [2114] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [2121] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
  [2128] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_identifier,
  [2135] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
  [2142] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [2149] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [2156] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [2163] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [2170] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [2177] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
  [2184] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [2191] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
  [2198] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_STAR,
  [2205] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [2212] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [2219] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_qualified_identifier,
  [2226] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_qualified_identifier,
  [2233] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2240] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_qualified_identifier,
  [2247] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [2254] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_string_literal,
  [2261] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [2268] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [2275] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [2282] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [2289] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [2296] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [2303] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
  [2310] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_EQ,
  [2317] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(516), 1,
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
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 332,
  [SMALL_STATE(13)] = 362,
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
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 698,
  [SMALL_STATE(30)] = 713,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 764,
  [SMALL_STATE(34)] = 786,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 822,
  [SMALL_STATE(37)] = 846,
  [SMALL_STATE(38)] = 870,
  [SMALL_STATE(39)] = 894,
  [SMALL_STATE(40)] = 918,
  [SMALL_STATE(41)] = 938,
  [SMALL_STATE(42)] = 962,
  [SMALL_STATE(43)] = 978,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1010,
  [SMALL_STATE(46)] = 1029,
  [SMALL_STATE(47)] = 1048,
  [SMALL_STATE(48)] = 1067,
  [SMALL_STATE(49)] = 1088,
  [SMALL_STATE(50)] = 1107,
  [SMALL_STATE(51)] = 1128,
  [SMALL_STATE(52)] = 1142,
  [SMALL_STATE(53)] = 1162,
  [SMALL_STATE(54)] = 1176,
  [SMALL_STATE(55)] = 1192,
  [SMALL_STATE(56)] = 1206,
  [SMALL_STATE(57)] = 1224,
  [SMALL_STATE(58)] = 1238,
  [SMALL_STATE(59)] = 1252,
  [SMALL_STATE(60)] = 1266,
  [SMALL_STATE(61)] = 1280,
  [SMALL_STATE(62)] = 1294,
  [SMALL_STATE(63)] = 1314,
  [SMALL_STATE(64)] = 1332,
  [SMALL_STATE(65)] = 1350,
  [SMALL_STATE(66)] = 1365,
  [SMALL_STATE(67)] = 1376,
  [SMALL_STATE(68)] = 1393,
  [SMALL_STATE(69)] = 1410,
  [SMALL_STATE(70)] = 1421,
  [SMALL_STATE(71)] = 1434,
  [SMALL_STATE(72)] = 1447,
  [SMALL_STATE(73)] = 1464,
  [SMALL_STATE(74)] = 1481,
  [SMALL_STATE(75)] = 1496,
  [SMALL_STATE(76)] = 1513,
  [SMALL_STATE(77)] = 1526,
  [SMALL_STATE(78)] = 1538,
  [SMALL_STATE(79)] = 1550,
  [SMALL_STATE(80)] = 1566,
  [SMALL_STATE(81)] = 1578,
  [SMALL_STATE(82)] = 1592,
  [SMALL_STATE(83)] = 1604,
  [SMALL_STATE(84)] = 1614,
  [SMALL_STATE(85)] = 1624,
  [SMALL_STATE(86)] = 1634,
  [SMALL_STATE(87)] = 1644,
  [SMALL_STATE(88)] = 1660,
  [SMALL_STATE(89)] = 1672,
  [SMALL_STATE(90)] = 1684,
  [SMALL_STATE(91)] = 1696,
  [SMALL_STATE(92)] = 1708,
  [SMALL_STATE(93)] = 1722,
  [SMALL_STATE(94)] = 1734,
  [SMALL_STATE(95)] = 1747,
  [SMALL_STATE(96)] = 1756,
  [SMALL_STATE(97)] = 1769,
  [SMALL_STATE(98)] = 1782,
  [SMALL_STATE(99)] = 1795,
  [SMALL_STATE(100)] = 1804,
  [SMALL_STATE(101)] = 1817,
  [SMALL_STATE(102)] = 1830,
  [SMALL_STATE(103)] = 1841,
  [SMALL_STATE(104)] = 1850,
  [SMALL_STATE(105)] = 1863,
  [SMALL_STATE(106)] = 1876,
  [SMALL_STATE(107)] = 1885,
  [SMALL_STATE(108)] = 1898,
  [SMALL_STATE(109)] = 1911,
  [SMALL_STATE(110)] = 1924,
  [SMALL_STATE(111)] = 1937,
  [SMALL_STATE(112)] = 1945,
  [SMALL_STATE(113)] = 1955,
  [SMALL_STATE(114)] = 1963,
  [SMALL_STATE(115)] = 1971,
  [SMALL_STATE(116)] = 1979,
  [SMALL_STATE(117)] = 1989,
  [SMALL_STATE(118)] = 1999,
  [SMALL_STATE(119)] = 2007,
  [SMALL_STATE(120)] = 2015,
  [SMALL_STATE(121)] = 2025,
  [SMALL_STATE(122)] = 2033,
  [SMALL_STATE(123)] = 2041,
  [SMALL_STATE(124)] = 2051,
  [SMALL_STATE(125)] = 2058,
  [SMALL_STATE(126)] = 2065,
  [SMALL_STATE(127)] = 2072,
  [SMALL_STATE(128)] = 2079,
  [SMALL_STATE(129)] = 2086,
  [SMALL_STATE(130)] = 2093,
  [SMALL_STATE(131)] = 2100,
  [SMALL_STATE(132)] = 2107,
  [SMALL_STATE(133)] = 2114,
  [SMALL_STATE(134)] = 2121,
  [SMALL_STATE(135)] = 2128,
  [SMALL_STATE(136)] = 2135,
  [SMALL_STATE(137)] = 2142,
  [SMALL_STATE(138)] = 2149,
  [SMALL_STATE(139)] = 2156,
  [SMALL_STATE(140)] = 2163,
  [SMALL_STATE(141)] = 2170,
  [SMALL_STATE(142)] = 2177,
  [SMALL_STATE(143)] = 2184,
  [SMALL_STATE(144)] = 2191,
  [SMALL_STATE(145)] = 2198,
  [SMALL_STATE(146)] = 2205,
  [SMALL_STATE(147)] = 2212,
  [SMALL_STATE(148)] = 2219,
  [SMALL_STATE(149)] = 2226,
  [SMALL_STATE(150)] = 2233,
  [SMALL_STATE(151)] = 2240,
  [SMALL_STATE(152)] = 2247,
  [SMALL_STATE(153)] = 2254,
  [SMALL_STATE(154)] = 2261,
  [SMALL_STATE(155)] = 2268,
  [SMALL_STATE(156)] = 2275,
  [SMALL_STATE(157)] = 2282,
  [SMALL_STATE(158)] = 2289,
  [SMALL_STATE(159)] = 2296,
  [SMALL_STATE(160)] = 2303,
  [SMALL_STATE(161)] = 2310,
  [SMALL_STATE(162)] = 2317,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(27),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(27),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(136),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(135),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(132),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(73),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(46),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_expr, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 4, .production_id = 12),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_permission_expr, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_permission_expr, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 5, .production_id = 13),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(72),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(67),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_type, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_trait, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_relation_expr, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_relation_expr, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expiration_trait, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_expr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(112),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(105),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(144),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
