#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  sym_comment = 4,
  sym_qualified_identifier = 5,
  anon_sym_LT = 6,
  anon_sym_COMMA = 7,
  anon_sym_GT = 8,
  anon_sym_definition = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_use = 12,
  anon_sym_import = 13,
  sym_string_literal = 14,
  anon_sym_partial = 15,
  anon_sym_DOT_DOT_DOT = 16,
  anon_sym_COLON = 17,
  anon_sym_STAR = 18,
  anon_sym_POUND = 19,
  anon_sym_with = 20,
  anon_sym_expiration = 21,
  anon_sym_and = 22,
  anon_sym_DASH_GT = 23,
  anon_sym_DOT = 24,
  anon_sym_any = 25,
  anon_sym_all = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_relation = 29,
  anon_sym_PIPE = 30,
  anon_sym_permission = 31,
  anon_sym_EQ = 32,
  anon_sym_nil = 33,
  sym_self_expression = 34,
  anon_sym_PLUS = 35,
  anon_sym_AMP = 36,
  anon_sym_DASH = 37,
  anon_sym_caveat = 38,
  aux_sym_caveat_expr_token1 = 39,
  sym_caveat_string = 40,
  aux_sym_caveat_object_token1 = 41,
  sym_source_file = 42,
  sym__statement_terminator = 43,
  sym__top_level = 44,
  sym_parameter_identifier = 45,
  sym_parameter_type_identifier = 46,
  sym_object_definition = 47,
  sym_use_flag = 48,
  sym_import = 49,
  sym_partial_definition = 50,
  sym_partial_reference = 51,
  sym_relation_type = 52,
  sym_wildcard_type = 53,
  sym_reference_type = 54,
  sym_relation_trait = 55,
  sym_expiration_trait = 56,
  sym_caveat_with_expiration = 57,
  sym_userset = 58,
  sym_arrow_expression = 59,
  sym_relation = 60,
  sym_relation_expr = 61,
  sym_unary_relation_expr = 62,
  sym_binary_relation_expr = 63,
  sym_permission = 64,
  sym_permission_type_annotation = 65,
  sym_permission_expr = 66,
  sym_unary_permission_expr = 67,
  sym_parenthesized_permission_expression = 68,
  sym_binary_permission_expr = 69,
  sym_caveat_definition = 70,
  sym_parameter = 71,
  sym_caveat_expr = 72,
  sym_caveat_object = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_source_file_repeat2 = 75,
  aux_sym_parameter_type_identifier_repeat1 = 76,
  aux_sym_object_definition_repeat1 = 77,
  aux_sym_permission_type_annotation_repeat1 = 78,
  aux_sym_caveat_definition_repeat1 = 79,
  aux_sym_caveat_expr_repeat1 = 80,
  aux_sym_caveat_object_repeat1 = 81,
  alias_sym_cel_type_identifier = 82,
  alias_sym_cel_variable_identifier = 83,
  alias_sym_field_identifier = 84,
  alias_sym_func_identifier = 85,
  alias_sym_method_identifier = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_parameter_type_identifier_repeat1] = "parameter_type_identifier_repeat1",
  [aux_sym_object_definition_repeat1] = "object_definition_repeat1",
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_parameter_type_identifier_repeat1] = aux_sym_parameter_type_identifier_repeat1,
  [aux_sym_object_definition_repeat1] = aux_sym_object_definition_repeat1,
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
  [aux_sym_source_file_repeat2] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 17,
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
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 57,
  [58] = 58,
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
  [69] = 60,
  [70] = 57,
  [71] = 71,
  [72] = 72,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
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
  [119] = 119,
  [120] = 120,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(20);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_caveat_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_caveat_object_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(83);
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
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 21},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 21},
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
    [sym_source_file] = STATE(141),
    [sym__statement_terminator] = STATE(2),
    [sym__top_level] = STATE(47),
    [sym_object_definition] = STATE(47),
    [sym_use_flag] = STATE(47),
    [sym_import] = STATE(47),
    [sym_partial_definition] = STATE(47),
    [sym_caveat_definition] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_definition] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_partial] = ACTIONS(17),
    [anon_sym_caveat] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(17), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(48), 6,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
  [41] = 9,
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(54), 6,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
  [74] = 9,
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
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(48), 6,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
  [107] = 9,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_definition,
    ACTIONS(39), 1,
      anon_sym_use,
    ACTIONS(42), 1,
      anon_sym_import,
    ACTIONS(45), 1,
      anon_sym_partial,
    ACTIONS(48), 1,
      anon_sym_caveat,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(66), 6,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
  [140] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    STATE(20), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(28), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [172] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(61), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(9), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(6), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [236] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(28), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [268] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(56), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(53), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [328] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(49), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [358] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(41), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [388] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(39), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_nil,
    ACTIONS(77), 1,
      sym_self_expression,
    STATE(23), 1,
      sym_arrow_expression,
    STATE(40), 1,
      sym_permission_expr,
    STATE(35), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(42), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [448] = 3,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(17), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [466] = 3,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(17), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(88), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      anon_sym_with,
    STATE(94), 1,
      sym_relation_trait,
    STATE(95), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DASH,
    ACTIONS(92), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_definition_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_DASH,
    ACTIONS(98), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_definition_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(104), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(112), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(28), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(116), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(118), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DASH_GT,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(122), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(28), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(79), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(138), 1,
      anon_sym_relation,
    ACTIONS(141), 1,
      anon_sym_permission,
    STATE(29), 1,
      aux_sym_object_definition_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_definition_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_definition_repeat1,
    STATE(61), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [769] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_with,
    STATE(94), 1,
      sym_relation_trait,
    STATE(95), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_qualified_identifier,
    STATE(73), 1,
      sym_relation_type,
    STATE(74), 1,
      sym_relation_expr,
    STATE(32), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(75), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_qualified_identifier,
    STATE(73), 1,
      sym_relation_type,
    STATE(91), 1,
      sym_relation_expr,
    STATE(32), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(75), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [842] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_caveat_expr,
    ACTIONS(156), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(44), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [872] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(38), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PLUS,
    ACTIONS(168), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PLUS,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(168), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [944] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_caveat_expr,
    ACTIONS(156), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(44), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [962] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(38), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [980] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_caveat_expr,
    ACTIONS(156), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(44), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [998] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      aux_sym_caveat_object_token1,
    STATE(50), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PLUS,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(188), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1062] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_caveat_object_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1079] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      aux_sym_caveat_object_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1096] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_caveat_object_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PLUS,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(206), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1145] = 5,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      aux_sym_caveat_object_token1,
    STATE(52), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PLUS,
    ACTIONS(172), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1178] = 2,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(216), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LT,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_parameter,
    STATE(108), 1,
      sym_parameter_identifier,
  [1216] = 2,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(25), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_and,
    ACTIONS(236), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_GT,
    STATE(80), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1314] = 2,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1323] = 2,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_caveat_definition_repeat1,
  [1354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    ACTIONS(255), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(98), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_GT,
    STATE(80), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_caveat_definition_repeat1,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(105), 1,
      sym_parameter,
    STATE(108), 1,
      sym_parameter_identifier,
  [1480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_caveat_definition_repeat1,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_permission_type_annotation,
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_qualified_identifier,
    ACTIONS(327), 1,
      anon_sym_expiration,
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(88), 1,
      sym_parameter_type_identifier,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_any,
      anon_sym_all,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(113), 1,
      sym_parameter_type_identifier,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(109), 1,
      sym_parameter_type_identifier,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_any,
      anon_sym_all,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_DOT_DOT_DOT,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
  [1796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
  [1817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_STAR,
  [1824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
  [1852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [1894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_EQ,
  [1901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_qualified_identifier,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_expiration,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [1922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_qualified_identifier,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_qualified_identifier,
  [1971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
  [1978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_string_literal,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 298,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 448,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 525,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 565,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 643,
  [SMALL_STATE(27)] = 659,
  [SMALL_STATE(28)] = 679,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 721,
  [SMALL_STATE(31)] = 745,
  [SMALL_STATE(32)] = 769,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 809,
  [SMALL_STATE(35)] = 830,
  [SMALL_STATE(36)] = 842,
  [SMALL_STATE(37)] = 860,
  [SMALL_STATE(38)] = 872,
  [SMALL_STATE(39)] = 890,
  [SMALL_STATE(40)] = 904,
  [SMALL_STATE(41)] = 920,
  [SMALL_STATE(42)] = 932,
  [SMALL_STATE(43)] = 944,
  [SMALL_STATE(44)] = 962,
  [SMALL_STATE(45)] = 980,
  [SMALL_STATE(46)] = 998,
  [SMALL_STATE(47)] = 1015,
  [SMALL_STATE(48)] = 1030,
  [SMALL_STATE(49)] = 1045,
  [SMALL_STATE(50)] = 1062,
  [SMALL_STATE(51)] = 1079,
  [SMALL_STATE(52)] = 1096,
  [SMALL_STATE(53)] = 1113,
  [SMALL_STATE(54)] = 1130,
  [SMALL_STATE(55)] = 1145,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1178,
  [SMALL_STATE(58)] = 1188,
  [SMALL_STATE(59)] = 1200,
  [SMALL_STATE(60)] = 1216,
  [SMALL_STATE(61)] = 1226,
  [SMALL_STATE(62)] = 1238,
  [SMALL_STATE(63)] = 1248,
  [SMALL_STATE(64)] = 1258,
  [SMALL_STATE(65)] = 1268,
  [SMALL_STATE(66)] = 1280,
  [SMALL_STATE(67)] = 1292,
  [SMALL_STATE(68)] = 1305,
  [SMALL_STATE(69)] = 1314,
  [SMALL_STATE(70)] = 1323,
  [SMALL_STATE(71)] = 1332,
  [SMALL_STATE(72)] = 1341,
  [SMALL_STATE(73)] = 1354,
  [SMALL_STATE(74)] = 1363,
  [SMALL_STATE(75)] = 1374,
  [SMALL_STATE(76)] = 1383,
  [SMALL_STATE(77)] = 1396,
  [SMALL_STATE(78)] = 1405,
  [SMALL_STATE(79)] = 1414,
  [SMALL_STATE(80)] = 1423,
  [SMALL_STATE(81)] = 1436,
  [SMALL_STATE(82)] = 1445,
  [SMALL_STATE(83)] = 1458,
  [SMALL_STATE(84)] = 1467,
  [SMALL_STATE(85)] = 1480,
  [SMALL_STATE(86)] = 1489,
  [SMALL_STATE(87)] = 1498,
  [SMALL_STATE(88)] = 1507,
  [SMALL_STATE(89)] = 1520,
  [SMALL_STATE(90)] = 1533,
  [SMALL_STATE(91)] = 1542,
  [SMALL_STATE(92)] = 1551,
  [SMALL_STATE(93)] = 1560,
  [SMALL_STATE(94)] = 1569,
  [SMALL_STATE(95)] = 1578,
  [SMALL_STATE(96)] = 1587,
  [SMALL_STATE(97)] = 1596,
  [SMALL_STATE(98)] = 1605,
  [SMALL_STATE(99)] = 1618,
  [SMALL_STATE(100)] = 1627,
  [SMALL_STATE(101)] = 1640,
  [SMALL_STATE(102)] = 1649,
  [SMALL_STATE(103)] = 1662,
  [SMALL_STATE(104)] = 1672,
  [SMALL_STATE(105)] = 1682,
  [SMALL_STATE(106)] = 1690,
  [SMALL_STATE(107)] = 1698,
  [SMALL_STATE(108)] = 1706,
  [SMALL_STATE(109)] = 1716,
  [SMALL_STATE(110)] = 1724,
  [SMALL_STATE(111)] = 1734,
  [SMALL_STATE(112)] = 1742,
  [SMALL_STATE(113)] = 1752,
  [SMALL_STATE(114)] = 1760,
  [SMALL_STATE(115)] = 1768,
  [SMALL_STATE(116)] = 1775,
  [SMALL_STATE(117)] = 1782,
  [SMALL_STATE(118)] = 1789,
  [SMALL_STATE(119)] = 1796,
  [SMALL_STATE(120)] = 1803,
  [SMALL_STATE(121)] = 1810,
  [SMALL_STATE(122)] = 1817,
  [SMALL_STATE(123)] = 1824,
  [SMALL_STATE(124)] = 1831,
  [SMALL_STATE(125)] = 1838,
  [SMALL_STATE(126)] = 1845,
  [SMALL_STATE(127)] = 1852,
  [SMALL_STATE(128)] = 1859,
  [SMALL_STATE(129)] = 1866,
  [SMALL_STATE(130)] = 1873,
  [SMALL_STATE(131)] = 1880,
  [SMALL_STATE(132)] = 1887,
  [SMALL_STATE(133)] = 1894,
  [SMALL_STATE(134)] = 1901,
  [SMALL_STATE(135)] = 1908,
  [SMALL_STATE(136)] = 1915,
  [SMALL_STATE(137)] = 1922,
  [SMALL_STATE(138)] = 1929,
  [SMALL_STATE(139)] = 1936,
  [SMALL_STATE(140)] = 1943,
  [SMALL_STATE(141)] = 1950,
  [SMALL_STATE(142)] = 1957,
  [SMALL_STATE(143)] = 1964,
  [SMALL_STATE(144)] = 1971,
  [SMALL_STATE(145)] = 1978,
  [SMALL_STATE(146)] = 1985,
  [SMALL_STATE(147)] = 1992,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(66),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(134),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(147),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(146),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(143),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(142),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(121),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(120),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(119),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(46),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 14),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(55),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(51),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 17),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 17),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 19),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(110),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(117),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 15),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
