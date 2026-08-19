#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 5
#define TOKEN_COUNT 40
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
  sym_source_file = 40,
  sym__statement_terminator = 41,
  sym__top_level = 42,
  sym_parameter_identifier = 43,
  sym_parameter_type_identifier = 44,
  sym_object_definition = 45,
  sym_use_flag = 46,
  sym_import = 47,
  sym_partial_definition = 48,
  sym_partial_reference = 49,
  sym_relation_type = 50,
  sym_wildcard_type = 51,
  sym_reference_type = 52,
  sym_relation_trait = 53,
  sym_expiration_trait = 54,
  sym_caveat_with_expiration = 55,
  sym_userset = 56,
  sym_arrow_expression = 57,
  sym_relation = 58,
  sym_relation_expr = 59,
  sym_unary_relation_expr = 60,
  sym_binary_relation_expr = 61,
  sym_permission = 62,
  sym_permission_type_annotation = 63,
  sym_permission_expr = 64,
  sym_unary_permission_expr = 65,
  sym_parenthesized_permission_expression = 66,
  sym_binary_permission_expr = 67,
  sym_caveat_definition = 68,
  sym_parameter = 69,
  sym_caveat_expr = 70,
  sym_caveat_object = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_source_file_repeat2 = 73,
  aux_sym_parameter_type_identifier_repeat1 = 74,
  aux_sym_object_definition_repeat1 = 75,
  aux_sym_permission_type_annotation_repeat1 = 76,
  aux_sym_caveat_definition_repeat1 = 77,
  aux_sym_caveat_expr_repeat1 = 78,
  alias_sym_cel_type_identifier = 79,
  alias_sym_cel_variable_identifier = 80,
  alias_sym_field_identifier = 81,
  alias_sym_func_identifier = 82,
  alias_sym_method_identifier = 83,
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
  [21] = 17,
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
  [69] = 69,
  [70] = 70,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(23);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(70);
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
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
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
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
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
    [sym_source_file] = STATE(125),
    [sym__statement_terminator] = STATE(2),
    [sym__top_level] = STATE(51),
    [sym_object_definition] = STATE(51),
    [sym_use_flag] = STATE(51),
    [sym_import] = STATE(51),
    [sym_partial_definition] = STATE(51),
    [sym_caveat_definition] = STATE(51),
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
    STATE(43), 6,
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
    STATE(44), 6,
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
    STATE(43), 6,
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
    STATE(55), 6,
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
    STATE(30), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(9), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(53), 3,
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
    STATE(19), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(61), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(8), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(53), 3,
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
    STATE(25), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(53), 3,
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
    STATE(28), 1,
      aux_sym_object_definition_repeat1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    STATE(53), 3,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(35), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(40), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(39), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(45), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(60), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
    STATE(31), 1,
      sym_arrow_expression,
    STATE(50), 1,
      sym_permission_expr,
    STATE(36), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(38), 2,
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
  [509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_definition_repeat1,
    STATE(53), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(94), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
    ACTIONS(79), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(99), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(103), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(107), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_definition_repeat1,
    STATE(53), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [645] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(122), 1,
      anon_sym_relation,
    ACTIONS(125), 1,
      anon_sym_permission,
    STATE(26), 1,
      aux_sym_object_definition_repeat1,
    STATE(53), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DASH,
    ACTIONS(128), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [685] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_definition_repeat1,
    STATE(53), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DASH,
    ACTIONS(134), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [725] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(57), 1,
      anon_sym_relation,
    ACTIONS(59), 1,
      anon_sym_permission,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_definition_repeat1,
    STATE(53), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(140), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_relation_type,
    STATE(89), 1,
      sym_relation_expr,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(81), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [790] = 5,
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
  [809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_relation_type,
    STATE(80), 1,
      sym_relation_expr,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(81), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(150), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [908] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym_caveat_expr_token1,
    STATE(130), 1,
      sym_caveat_expr,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [925] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      aux_sym_caveat_expr_token1,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(176), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [989] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym_caveat_expr_token1,
    STATE(113), 1,
      sym_caveat_expr,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1006] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_caveat_expr_token1,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1023] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      aux_sym_caveat_expr_token1,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1040] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      aux_sym_caveat_expr_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(194), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1089] = 5,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym_caveat_expr_token1,
    STATE(120), 1,
      sym_caveat_expr,
    STATE(49), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(20), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_parameter,
    STATE(104), 1,
      sym_parameter_identifier,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym__statement_terminator,
      aux_sym_source_file_repeat1,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_and,
    ACTIONS(202), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      anon_sym_DASH,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(216), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1225] = 2,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(104), 1,
      sym_parameter_identifier,
    STATE(105), 1,
      sym_parameter,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_caveat_definition_repeat1,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_GT,
    STATE(70), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_GT,
    STATE(70), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1358] = 2,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_caveat_definition_repeat1,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_PIPE,
    ACTIONS(277), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(281), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_permission_type_annotation,
  [1466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_GT,
    STATE(72), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(297), 1,
      anon_sym_EQ,
    STATE(84), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_caveat_definition_repeat1,
  [1586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_qualified_identifier,
    ACTIONS(309), 1,
      anon_sym_expiration,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_any,
      anon_sym_all,
  [1612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT_DOT,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_any,
      anon_sym_all,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(109), 1,
      sym_parameter_type_identifier,
  [1648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(108), 1,
      sym_parameter_type_identifier,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(88), 1,
      sym_parameter_type_identifier,
  [1676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_identifier,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_string_literal,
  [1706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [1720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_qualified_identifier,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_STAR,
  [1762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [1776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [1783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_qualified_identifier,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_qualified_identifier,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_expiration,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(20)] = 533,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 569,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 601,
  [SMALL_STATE(25)] = 621,
  [SMALL_STATE(26)] = 645,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 685,
  [SMALL_STATE(29)] = 709,
  [SMALL_STATE(30)] = 725,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 769,
  [SMALL_STATE(33)] = 790,
  [SMALL_STATE(34)] = 809,
  [SMALL_STATE(35)] = 830,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 870,
  [SMALL_STATE(39)] = 882,
  [SMALL_STATE(40)] = 894,
  [SMALL_STATE(41)] = 908,
  [SMALL_STATE(42)] = 925,
  [SMALL_STATE(43)] = 942,
  [SMALL_STATE(44)] = 957,
  [SMALL_STATE(45)] = 972,
  [SMALL_STATE(46)] = 989,
  [SMALL_STATE(47)] = 1006,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1040,
  [SMALL_STATE(50)] = 1057,
  [SMALL_STATE(51)] = 1074,
  [SMALL_STATE(52)] = 1089,
  [SMALL_STATE(53)] = 1106,
  [SMALL_STATE(54)] = 1118,
  [SMALL_STATE(55)] = 1134,
  [SMALL_STATE(56)] = 1146,
  [SMALL_STATE(57)] = 1158,
  [SMALL_STATE(58)] = 1168,
  [SMALL_STATE(59)] = 1178,
  [SMALL_STATE(60)] = 1188,
  [SMALL_STATE(61)] = 1204,
  [SMALL_STATE(62)] = 1216,
  [SMALL_STATE(63)] = 1225,
  [SMALL_STATE(64)] = 1234,
  [SMALL_STATE(65)] = 1243,
  [SMALL_STATE(66)] = 1252,
  [SMALL_STATE(67)] = 1265,
  [SMALL_STATE(68)] = 1274,
  [SMALL_STATE(69)] = 1287,
  [SMALL_STATE(70)] = 1296,
  [SMALL_STATE(71)] = 1309,
  [SMALL_STATE(72)] = 1318,
  [SMALL_STATE(73)] = 1331,
  [SMALL_STATE(74)] = 1340,
  [SMALL_STATE(75)] = 1349,
  [SMALL_STATE(76)] = 1358,
  [SMALL_STATE(77)] = 1367,
  [SMALL_STATE(78)] = 1376,
  [SMALL_STATE(79)] = 1389,
  [SMALL_STATE(80)] = 1398,
  [SMALL_STATE(81)] = 1409,
  [SMALL_STATE(82)] = 1418,
  [SMALL_STATE(83)] = 1431,
  [SMALL_STATE(84)] = 1440,
  [SMALL_STATE(85)] = 1453,
  [SMALL_STATE(86)] = 1466,
  [SMALL_STATE(87)] = 1475,
  [SMALL_STATE(88)] = 1484,
  [SMALL_STATE(89)] = 1497,
  [SMALL_STATE(90)] = 1506,
  [SMALL_STATE(91)] = 1515,
  [SMALL_STATE(92)] = 1524,
  [SMALL_STATE(93)] = 1533,
  [SMALL_STATE(94)] = 1546,
  [SMALL_STATE(95)] = 1555,
  [SMALL_STATE(96)] = 1564,
  [SMALL_STATE(97)] = 1573,
  [SMALL_STATE(98)] = 1586,
  [SMALL_STATE(99)] = 1596,
  [SMALL_STATE(100)] = 1604,
  [SMALL_STATE(101)] = 1612,
  [SMALL_STATE(102)] = 1622,
  [SMALL_STATE(103)] = 1630,
  [SMALL_STATE(104)] = 1638,
  [SMALL_STATE(105)] = 1648,
  [SMALL_STATE(106)] = 1656,
  [SMALL_STATE(107)] = 1666,
  [SMALL_STATE(108)] = 1676,
  [SMALL_STATE(109)] = 1684,
  [SMALL_STATE(110)] = 1692,
  [SMALL_STATE(111)] = 1699,
  [SMALL_STATE(112)] = 1706,
  [SMALL_STATE(113)] = 1713,
  [SMALL_STATE(114)] = 1720,
  [SMALL_STATE(115)] = 1727,
  [SMALL_STATE(116)] = 1734,
  [SMALL_STATE(117)] = 1741,
  [SMALL_STATE(118)] = 1748,
  [SMALL_STATE(119)] = 1755,
  [SMALL_STATE(120)] = 1762,
  [SMALL_STATE(121)] = 1769,
  [SMALL_STATE(122)] = 1776,
  [SMALL_STATE(123)] = 1783,
  [SMALL_STATE(124)] = 1790,
  [SMALL_STATE(125)] = 1797,
  [SMALL_STATE(126)] = 1804,
  [SMALL_STATE(127)] = 1811,
  [SMALL_STATE(128)] = 1818,
  [SMALL_STATE(129)] = 1825,
  [SMALL_STATE(130)] = 1832,
  [SMALL_STATE(131)] = 1839,
  [SMALL_STATE(132)] = 1846,
  [SMALL_STATE(133)] = 1853,
  [SMALL_STATE(134)] = 1860,
  [SMALL_STATE(135)] = 1867,
  [SMALL_STATE(136)] = 1874,
  [SMALL_STATE(137)] = 1881,
  [SMALL_STATE(138)] = 1888,
  [SMALL_STATE(139)] = 1895,
  [SMALL_STATE(140)] = 1902,
  [SMALL_STATE(141)] = 1909,
  [SMALL_STATE(142)] = 1916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(55),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(133),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(112),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(111),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(114),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(124),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 4),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(122),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(131),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(121),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(42),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(47),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 16),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 15),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 17),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 19),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(106),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(66),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 13),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
