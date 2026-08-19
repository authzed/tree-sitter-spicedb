#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
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
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 9,
  [16] = 16,
  [17] = 12,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 33,
  [56] = 44,
  [57] = 37,
  [58] = 39,
  [59] = 43,
  [60] = 34,
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
  [75] = 53,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 65,
  [80] = 80,
  [81] = 66,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 63,
  [87] = 62,
  [88] = 88,
  [89] = 61,
  [90] = 85,
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
  [110] = 109,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 114,
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
  [146] = 145,
  [147] = 147,
  [148] = 144,
  [149] = 127,
  [150] = 128,
  [151] = 151,
  [152] = 124,
  [153] = 125,
  [154] = 132,
  [155] = 119,
  [156] = 156,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(2);
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
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3);
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
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(83);
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
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
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
      if (lookahead == '"') ADVANCE(2);
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
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(14);
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
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_caveat_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_caveat_string);
      if (lookahead == '"') ADVANCE(27);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_caveat_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_caveat_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
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
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 29},
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
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 29},
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
    [sym_source_file] = STATE(130),
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
    STATE(6), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(58), 1,
      anon_sym_relation,
    ACTIONS(60), 1,
      anon_sym_permission,
    ACTIONS(64), 1,
      anon_sym_CR,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(7), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(72), 3,
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
    ACTIONS(70), 1,
      anon_sym_CR,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(68), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(20), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(72), 3,
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
    ACTIONS(70), 1,
      anon_sym_CR,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(68), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(20), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(72), 3,
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
    STATE(43), 1,
      sym_arrow_expression,
    STATE(53), 1,
      sym_permission_expr,
    STATE(65), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(66), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(59), 1,
      sym_arrow_expression,
    STATE(85), 1,
      sym_permission_expr,
    STATE(79), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(81), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(59), 1,
      sym_arrow_expression,
    STATE(75), 1,
      sym_permission_expr,
    STATE(79), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(81), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(59), 1,
      sym_arrow_expression,
    STATE(89), 1,
      sym_permission_expr,
    STATE(79), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(81), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [334] = 9,
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
    STATE(59), 1,
      sym_arrow_expression,
    STATE(87), 1,
      sym_permission_expr,
    STATE(79), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(81), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(43), 1,
      sym_arrow_expression,
    STATE(54), 1,
      sym_permission_expr,
    STATE(65), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(66), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(83), 1,
      sym_relation_trait,
    STATE(84), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [422] = 9,
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
    STATE(59), 1,
      sym_arrow_expression,
    STATE(90), 1,
      sym_permission_expr,
    STATE(79), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(81), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [452] = 9,
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
    STATE(43), 1,
      sym_arrow_expression,
    STATE(64), 1,
      sym_permission_expr,
    STATE(65), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(66), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [482] = 9,
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
    STATE(43), 1,
      sym_arrow_expression,
    STATE(62), 1,
      sym_permission_expr,
    STATE(65), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(66), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
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
    STATE(43), 1,
      sym_arrow_expression,
    STATE(61), 1,
      sym_permission_expr,
    STATE(65), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(66), 2,
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
  [557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_CR,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(20), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [578] = 2,
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
  [593] = 2,
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
  [608] = 2,
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
  [623] = 2,
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
  [638] = 2,
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
  [653] = 2,
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
  [668] = 2,
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
  [713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_CR,
    ACTIONS(68), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(20), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [734] = 2,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_CR,
    ACTIONS(162), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [780] = 5,
    ACTIONS(3), 1,
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
  [800] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [824] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_relation,
    ACTIONS(190), 1,
      anon_sym_permission,
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_CR,
    ACTIONS(193), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [864] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_CR,
    ACTIONS(199), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [904] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [928] = 7,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(178), 1,
      anon_sym_relation,
    ACTIONS(180), 1,
      anon_sym_permission,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    STATE(72), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_CR,
    ACTIONS(102), 1,
      anon_sym_with,
    STATE(83), 1,
      sym_relation_trait,
    STATE(84), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [974] = 5,
    ACTIONS(3), 1,
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
  [1010] = 6,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_qualified_identifier,
    STATE(80), 1,
      sym_relation_expr,
    STATE(82), 1,
      sym_relation_type,
    STATE(42), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(76), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_caveat_expr,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(223), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(230), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(235), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(239), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1107] = 6,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_qualified_identifier,
    STATE(78), 1,
      sym_relation_expr,
    STATE(82), 1,
      sym_relation_type,
    STATE(42), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(76), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_caveat_expr,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(223), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
    ACTIONS(235), 3,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_CR,
    ACTIONS(247), 1,
      anon_sym_PLUS,
    ACTIONS(249), 1,
      anon_sym_AMP,
    ACTIONS(243), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH,
  [1184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_PLUS,
    ACTIONS(249), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CR,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(251), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1204] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(164), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1218] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(217), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1232] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1246] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(201), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1260] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(257), 1,
      anon_sym_DASH_GT,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(209), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1278] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DASH_GT,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(168), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_CR,
    ACTIONS(247), 1,
      anon_sym_PLUS,
    ACTIONS(243), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_DASH,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_CR,
    ACTIONS(243), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_CR,
    ACTIONS(265), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_PLUS,
    ACTIONS(249), 1,
      anon_sym_AMP,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_CR,
    ACTIONS(269), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_CR,
    ACTIONS(273), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_CR,
    ACTIONS(277), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_CR,
    ACTIONS(287), 1,
      anon_sym_and,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_CR,
    ACTIONS(289), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_CR,
    ACTIONS(293), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_CR,
    ACTIONS(297), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_CR,
    ACTIONS(301), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(30), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
      sym_caveat_comment,
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_CR,
    ACTIONS(307), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1491] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_AMP,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_CR,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_CR,
    ACTIONS(319), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(323), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1543] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_CR,
    ACTIONS(329), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1565] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_CR,
    ACTIONS(333), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_CR,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1611] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_AMP,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      anon_sym_DASH,
  [1627] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1637] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1647] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LT,
    ACTIONS(351), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1659] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(245), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [1671] = 5,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_PLUS,
    ACTIONS(313), 1,
      anon_sym_AMP,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1687] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1696] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_caveat_definition_repeat1,
  [1709] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_GT,
    STATE(93), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1722] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_caveat_definition_repeat1,
  [1735] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_GT,
    STATE(98), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1748] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(94), 1,
      sym_parameter,
    STATE(116), 1,
      sym_parameter_identifier,
  [1761] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1770] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_GT,
    STATE(93), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1783] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    ACTIONS(383), 1,
      anon_sym_EQ,
    STATE(101), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1796] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_caveat_definition_repeat1,
  [1809] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1822] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(112), 1,
      sym_parameter,
    STATE(116), 1,
      sym_parameter_identifier,
  [1835] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym_permission_type_annotation,
  [1848] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_CR,
    ACTIONS(398), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1872] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_qualified_identifier,
    ACTIONS(404), 1,
      anon_sym_expiration,
  [1882] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_DOT_DOT_DOT,
  [1892] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1900] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_any,
      anon_sym_all,
  [1908] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_any,
      anon_sym_all,
  [1916] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1924] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1932] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(118), 1,
      sym_parameter_type_identifier,
  [1942] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_any,
      anon_sym_all,
  [1950] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(95), 1,
      sym_parameter_type_identifier,
  [1960] = 3,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(111), 1,
      sym_parameter_type_identifier,
  [1970] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_any,
      anon_sym_all,
  [1978] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1986] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
  [1993] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [2000] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [2007] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [2014] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_expiration,
  [2021] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
  [2028] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
  [2035] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
  [2042] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2049] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [2056] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
  [2063] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
  [2070] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_EQ,
  [2077] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
  [2084] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
  [2091] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [2098] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_qualified_identifier,
  [2105] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_qualified_identifier,
  [2112] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_string_literal,
  [2119] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
  [2126] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COLON,
  [2133] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [2140] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
  [2147] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
  [2154] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [2161] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [2168] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [2175] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
  [2182] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [2189] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
  [2196] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2203] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [2210] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2217] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
  [2224] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [2231] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
  [2238] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
  [2245] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_qualified_identifier,
  [2252] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(498), 1,
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
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 452,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 542,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 608,
  [SMALL_STATE(24)] = 623,
  [SMALL_STATE(25)] = 638,
  [SMALL_STATE(26)] = 653,
  [SMALL_STATE(27)] = 668,
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 698,
  [SMALL_STATE(30)] = 713,
  [SMALL_STATE(31)] = 734,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 764,
  [SMALL_STATE(34)] = 780,
  [SMALL_STATE(35)] = 800,
  [SMALL_STATE(36)] = 824,
  [SMALL_STATE(37)] = 848,
  [SMALL_STATE(38)] = 864,
  [SMALL_STATE(39)] = 888,
  [SMALL_STATE(40)] = 904,
  [SMALL_STATE(41)] = 928,
  [SMALL_STATE(42)] = 952,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1010,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1050,
  [SMALL_STATE(48)] = 1069,
  [SMALL_STATE(49)] = 1088,
  [SMALL_STATE(50)] = 1107,
  [SMALL_STATE(51)] = 1128,
  [SMALL_STATE(52)] = 1147,
  [SMALL_STATE(53)] = 1166,
  [SMALL_STATE(54)] = 1184,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1218,
  [SMALL_STATE(57)] = 1232,
  [SMALL_STATE(58)] = 1246,
  [SMALL_STATE(59)] = 1260,
  [SMALL_STATE(60)] = 1278,
  [SMALL_STATE(61)] = 1296,
  [SMALL_STATE(62)] = 1312,
  [SMALL_STATE(63)] = 1326,
  [SMALL_STATE(64)] = 1340,
  [SMALL_STATE(65)] = 1360,
  [SMALL_STATE(66)] = 1374,
  [SMALL_STATE(67)] = 1388,
  [SMALL_STATE(68)] = 1399,
  [SMALL_STATE(69)] = 1414,
  [SMALL_STATE(70)] = 1427,
  [SMALL_STATE(71)] = 1440,
  [SMALL_STATE(72)] = 1453,
  [SMALL_STATE(73)] = 1468,
  [SMALL_STATE(74)] = 1479,
  [SMALL_STATE(75)] = 1491,
  [SMALL_STATE(76)] = 1505,
  [SMALL_STATE(77)] = 1517,
  [SMALL_STATE(78)] = 1529,
  [SMALL_STATE(79)] = 1543,
  [SMALL_STATE(80)] = 1553,
  [SMALL_STATE(81)] = 1565,
  [SMALL_STATE(82)] = 1575,
  [SMALL_STATE(83)] = 1587,
  [SMALL_STATE(84)] = 1599,
  [SMALL_STATE(85)] = 1611,
  [SMALL_STATE(86)] = 1627,
  [SMALL_STATE(87)] = 1637,
  [SMALL_STATE(88)] = 1647,
  [SMALL_STATE(89)] = 1659,
  [SMALL_STATE(90)] = 1671,
  [SMALL_STATE(91)] = 1687,
  [SMALL_STATE(92)] = 1696,
  [SMALL_STATE(93)] = 1709,
  [SMALL_STATE(94)] = 1722,
  [SMALL_STATE(95)] = 1735,
  [SMALL_STATE(96)] = 1748,
  [SMALL_STATE(97)] = 1761,
  [SMALL_STATE(98)] = 1770,
  [SMALL_STATE(99)] = 1783,
  [SMALL_STATE(100)] = 1796,
  [SMALL_STATE(101)] = 1809,
  [SMALL_STATE(102)] = 1822,
  [SMALL_STATE(103)] = 1835,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1861,
  [SMALL_STATE(106)] = 1872,
  [SMALL_STATE(107)] = 1882,
  [SMALL_STATE(108)] = 1892,
  [SMALL_STATE(109)] = 1900,
  [SMALL_STATE(110)] = 1908,
  [SMALL_STATE(111)] = 1916,
  [SMALL_STATE(112)] = 1924,
  [SMALL_STATE(113)] = 1932,
  [SMALL_STATE(114)] = 1942,
  [SMALL_STATE(115)] = 1950,
  [SMALL_STATE(116)] = 1960,
  [SMALL_STATE(117)] = 1970,
  [SMALL_STATE(118)] = 1978,
  [SMALL_STATE(119)] = 1986,
  [SMALL_STATE(120)] = 1993,
  [SMALL_STATE(121)] = 2000,
  [SMALL_STATE(122)] = 2007,
  [SMALL_STATE(123)] = 2014,
  [SMALL_STATE(124)] = 2021,
  [SMALL_STATE(125)] = 2028,
  [SMALL_STATE(126)] = 2035,
  [SMALL_STATE(127)] = 2042,
  [SMALL_STATE(128)] = 2049,
  [SMALL_STATE(129)] = 2056,
  [SMALL_STATE(130)] = 2063,
  [SMALL_STATE(131)] = 2070,
  [SMALL_STATE(132)] = 2077,
  [SMALL_STATE(133)] = 2084,
  [SMALL_STATE(134)] = 2091,
  [SMALL_STATE(135)] = 2098,
  [SMALL_STATE(136)] = 2105,
  [SMALL_STATE(137)] = 2112,
  [SMALL_STATE(138)] = 2119,
  [SMALL_STATE(139)] = 2126,
  [SMALL_STATE(140)] = 2133,
  [SMALL_STATE(141)] = 2140,
  [SMALL_STATE(142)] = 2147,
  [SMALL_STATE(143)] = 2154,
  [SMALL_STATE(144)] = 2161,
  [SMALL_STATE(145)] = 2168,
  [SMALL_STATE(146)] = 2175,
  [SMALL_STATE(147)] = 2182,
  [SMALL_STATE(148)] = 2189,
  [SMALL_STATE(149)] = 2196,
  [SMALL_STATE(150)] = 2203,
  [SMALL_STATE(151)] = 2210,
  [SMALL_STATE(152)] = 2217,
  [SMALL_STATE(153)] = 2224,
  [SMALL_STATE(154)] = 2231,
  [SMALL_STATE(155)] = 2238,
  [SMALL_STATE(156)] = 2245,
  [SMALL_STATE(157)] = 2252,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(20),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(133),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(141),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(142),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(49),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(47),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_permission_expr, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 4, .production_id = 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 5, .production_id = 13),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 13),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_expr, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_permission_expr, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_type, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expiration_trait, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_expr, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 10),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_relation_expr, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_relation_expr, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_trait, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(102),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(113),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(147),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [444] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
