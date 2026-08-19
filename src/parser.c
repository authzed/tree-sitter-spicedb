#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
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
  [15] = 15,
  [16] = 13,
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
  [50] = 39,
  [51] = 51,
  [52] = 41,
  [53] = 43,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 44,
  [63] = 42,
  [64] = 34,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 60,
  [77] = 77,
  [78] = 78,
  [79] = 61,
  [80] = 80,
  [81] = 47,
  [82] = 82,
  [83] = 48,
  [84] = 84,
  [85] = 55,
  [86] = 86,
  [87] = 77,
  [88] = 88,
  [89] = 57,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 86,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 90,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
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
  [148] = 148,
  [149] = 149,
  [150] = 125,
  [151] = 151,
  [152] = 139,
  [153] = 153,
  [154] = 131,
  [155] = 132,
  [156] = 156,
  [157] = 129,
  [158] = 130,
  [159] = 136,
  [160] = 141,
  [161] = 161,
  [162] = 162,
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
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 23},
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
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
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
    STATE(37), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(19), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(36), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(4), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(35), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(7), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(40), 1,
      aux_sym_object_definition_repeat2,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(19), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    STATE(65), 3,
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
    STATE(53), 1,
      sym_arrow_expression,
    STATE(77), 1,
      sym_permission_expr,
    STATE(76), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(43), 1,
      sym_arrow_expression,
    STATE(58), 1,
      sym_permission_expr,
    STATE(57), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(60), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
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
    STATE(53), 1,
      sym_arrow_expression,
    STATE(87), 1,
      sym_permission_expr,
    STATE(76), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [304] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(43), 1,
      sym_arrow_expression,
    STATE(48), 1,
      sym_permission_expr,
    STATE(57), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(60), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(43), 1,
      sym_arrow_expression,
    STATE(47), 1,
      sym_permission_expr,
    STATE(57), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(60), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(43), 1,
      sym_arrow_expression,
    STATE(61), 1,
      sym_permission_expr,
    STATE(57), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(60), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [394] = 8,
    ACTIONS(54), 1,
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
    STATE(75), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_nil,
    ACTIONS(92), 1,
      sym_self_expression,
    STATE(43), 1,
      sym_arrow_expression,
    STATE(51), 1,
      sym_permission_expr,
    STATE(57), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(60), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [452] = 9,
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
    STATE(53), 1,
      sym_arrow_expression,
    STATE(79), 1,
      sym_permission_expr,
    STATE(76), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [482] = 9,
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
    STATE(53), 1,
      sym_arrow_expression,
    STATE(81), 1,
      sym_permission_expr,
    STATE(76), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [512] = 9,
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
    STATE(53), 1,
      sym_arrow_expression,
    STATE(83), 1,
      sym_permission_expr,
    STATE(76), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(89), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [542] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_CR,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(19), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(110), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [563] = 2,
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
  [683] = 5,
    ACTIONS(52), 1,
      anon_sym_CR,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(19), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
    ACTIONS(144), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [704] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(148), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [719] = 2,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(152), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
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
  [764] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_CR,
    ACTIONS(102), 1,
      anon_sym_with,
    STATE(80), 1,
      sym_relation_trait,
    STATE(75), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [786] = 3,
    ACTIONS(54), 1,
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
  [802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 1,
      anon_sym_relation,
    ACTIONS(172), 1,
      anon_sym_permission,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [826] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 1,
      anon_sym_relation,
    ACTIONS(172), 1,
      anon_sym_permission,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [850] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 1,
      anon_sym_relation,
    ACTIONS(172), 1,
      anon_sym_permission,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(183), 1,
      anon_sym_relation,
    ACTIONS(186), 1,
      anon_sym_permission,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [898] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_CR,
    ACTIONS(189), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 1,
      anon_sym_relation,
    ACTIONS(172), 1,
      anon_sym_permission,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_object_definition_repeat2,
    STATE(65), 3,
      sym_partial_reference,
      sym_relation,
      sym_permission,
  [938] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_CR,
    ACTIONS(199), 1,
      anon_sym_DASH_GT,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(195), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [958] = 3,
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
  [974] = 5,
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
  [994] = 3,
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
  [1010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_qualified_identifier,
    STATE(82), 1,
      sym_relation_expr,
    STATE(93), 1,
      sym_relation_type,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(91), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_qualified_identifier,
    STATE(92), 1,
      sym_relation_expr,
    STATE(93), 1,
      sym_relation_type,
    STATE(33), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(91), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [1052] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_CR,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(221), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_DASH,
  [1068] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_CR,
    ACTIONS(221), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1082] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_caveat_expr,
    ACTIONS(229), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(59), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1114] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(233), 1,
      anon_sym_CR,
    ACTIONS(235), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      anon_sym_DASH_GT,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(197), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_DASH_GT,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(209), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1170] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(54), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1188] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_CR,
    ACTIONS(255), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1202] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_caveat_expr,
    ACTIONS(229), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(59), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1220] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_CR,
    ACTIONS(259), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1234] = 6,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(235), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_CR,
    ACTIONS(263), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1254] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 2,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
    STATE(54), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1272] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_CR,
    ACTIONS(271), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1286] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_CR,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(235), 1,
      anon_sym_AMP,
    ACTIONS(221), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DASH,
  [1304] = 3,
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
  [1318] = 3,
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
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(164), 5,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
  [1346] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_CR,
    ACTIONS(275), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(28), 2,
      sym__statement_terminator,
      aux_sym_object_definition_repeat1,
  [1361] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      aux_sym_caveat_object_token1,
    STATE(66), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1378] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_CR,
    ACTIONS(291), 1,
      anon_sym_and,
    ACTIONS(287), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1393] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      aux_sym_caveat_object_token1,
    STATE(66), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1410] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_CR,
    ACTIONS(299), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1423] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_CR,
    ACTIONS(303), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1436] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      aux_sym_caveat_object_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(66), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1453] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      aux_sym_caveat_object_token1,
    STATE(71), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1470] = 5,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      aux_sym_caveat_object_token1,
    STATE(68), 2,
      sym_caveat_object,
      aux_sym_caveat_object_repeat1,
  [1487] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_CR,
    ACTIONS(317), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_with,
      anon_sym_PIPE,
  [1500] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_CR,
    ACTIONS(321), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_AMP,
    ACTIONS(331), 1,
      anon_sym_DASH,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LT,
    ACTIONS(335), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_AMP,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [1564] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_CR,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_DASH,
  [1588] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1610] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_CR,
    ACTIONS(345), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1632] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(349), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_PLUS,
    ACTIONS(329), 1,
      anon_sym_AMP,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [1658] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(353), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [1680] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
      sym_caveat_string,
  [1690] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_CR,
    ACTIONS(359), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1702] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_CR,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1716] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_CR,
    ACTIONS(369), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_PIPE,
  [1728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_GT,
    STATE(103), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1763] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_caveat_definition_repeat1,
  [1785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(388), 1,
      anon_sym_EQ,
    STATE(94), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_caveat_definition_repeat1,
  [1811] = 3,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_CR,
    ACTIONS(394), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(100), 1,
      sym_parameter,
    STATE(121), 1,
      sym_parameter_identifier,
  [1835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_GT,
    STATE(103), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_caveat_definition_repeat1,
  [1870] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_object_token1,
  [1879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(121), 1,
      sym_parameter_identifier,
    STATE(123), 1,
      sym_parameter,
  [1892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym_permission_type_annotation,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_GT,
    STATE(96), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_any,
      anon_sym_all,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_any,
      anon_sym_all,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_any,
      anon_sym_all,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 1,
      anon_sym_DOT_DOT_DOT,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_qualified_identifier,
    ACTIONS(434), 1,
      anon_sym_expiration,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_any,
      anon_sym_all,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(111), 1,
      sym_parameter_type_identifier,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(113), 1,
      sym_parameter_type_identifier,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(110), 1,
      sym_parameter_type_identifier,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_identifier,
  [2052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_identifier,
  [2059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_EQ,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [2073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_expiration,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_identifier,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [2129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
  [2136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [2150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [2157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [2164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [2185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
  [2192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_qualified_identifier,
  [2199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [2213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_qualified_identifier,
  [2220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_qualified_identifier,
  [2227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [2248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_string_literal,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [2290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
  [2304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
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
  [SMALL_STATE(20)] = 563,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 608,
  [SMALL_STATE(24)] = 623,
  [SMALL_STATE(25)] = 638,
  [SMALL_STATE(26)] = 653,
  [SMALL_STATE(27)] = 668,
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 734,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 764,
  [SMALL_STATE(34)] = 786,
  [SMALL_STATE(35)] = 802,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 850,
  [SMALL_STATE(38)] = 874,
  [SMALL_STATE(39)] = 898,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 938,
  [SMALL_STATE(42)] = 958,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1010,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1068,
  [SMALL_STATE(49)] = 1082,
  [SMALL_STATE(50)] = 1100,
  [SMALL_STATE(51)] = 1114,
  [SMALL_STATE(52)] = 1134,
  [SMALL_STATE(53)] = 1152,
  [SMALL_STATE(54)] = 1170,
  [SMALL_STATE(55)] = 1188,
  [SMALL_STATE(56)] = 1202,
  [SMALL_STATE(57)] = 1220,
  [SMALL_STATE(58)] = 1234,
  [SMALL_STATE(59)] = 1254,
  [SMALL_STATE(60)] = 1272,
  [SMALL_STATE(61)] = 1286,
  [SMALL_STATE(62)] = 1304,
  [SMALL_STATE(63)] = 1318,
  [SMALL_STATE(64)] = 1332,
  [SMALL_STATE(65)] = 1346,
  [SMALL_STATE(66)] = 1361,
  [SMALL_STATE(67)] = 1378,
  [SMALL_STATE(68)] = 1393,
  [SMALL_STATE(69)] = 1410,
  [SMALL_STATE(70)] = 1423,
  [SMALL_STATE(71)] = 1436,
  [SMALL_STATE(72)] = 1453,
  [SMALL_STATE(73)] = 1470,
  [SMALL_STATE(74)] = 1487,
  [SMALL_STATE(75)] = 1500,
  [SMALL_STATE(76)] = 1512,
  [SMALL_STATE(77)] = 1522,
  [SMALL_STATE(78)] = 1538,
  [SMALL_STATE(79)] = 1550,
  [SMALL_STATE(80)] = 1564,
  [SMALL_STATE(81)] = 1576,
  [SMALL_STATE(82)] = 1588,
  [SMALL_STATE(83)] = 1600,
  [SMALL_STATE(84)] = 1610,
  [SMALL_STATE(85)] = 1622,
  [SMALL_STATE(86)] = 1632,
  [SMALL_STATE(87)] = 1642,
  [SMALL_STATE(88)] = 1658,
  [SMALL_STATE(89)] = 1670,
  [SMALL_STATE(90)] = 1680,
  [SMALL_STATE(91)] = 1690,
  [SMALL_STATE(92)] = 1702,
  [SMALL_STATE(93)] = 1716,
  [SMALL_STATE(94)] = 1728,
  [SMALL_STATE(95)] = 1741,
  [SMALL_STATE(96)] = 1750,
  [SMALL_STATE(97)] = 1763,
  [SMALL_STATE(98)] = 1772,
  [SMALL_STATE(99)] = 1785,
  [SMALL_STATE(100)] = 1798,
  [SMALL_STATE(101)] = 1811,
  [SMALL_STATE(102)] = 1822,
  [SMALL_STATE(103)] = 1835,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1857,
  [SMALL_STATE(106)] = 1870,
  [SMALL_STATE(107)] = 1879,
  [SMALL_STATE(108)] = 1892,
  [SMALL_STATE(109)] = 1905,
  [SMALL_STATE(110)] = 1918,
  [SMALL_STATE(111)] = 1931,
  [SMALL_STATE(112)] = 1939,
  [SMALL_STATE(113)] = 1947,
  [SMALL_STATE(114)] = 1955,
  [SMALL_STATE(115)] = 1963,
  [SMALL_STATE(116)] = 1971,
  [SMALL_STATE(117)] = 1981,
  [SMALL_STATE(118)] = 1991,
  [SMALL_STATE(119)] = 1999,
  [SMALL_STATE(120)] = 2007,
  [SMALL_STATE(121)] = 2017,
  [SMALL_STATE(122)] = 2027,
  [SMALL_STATE(123)] = 2037,
  [SMALL_STATE(124)] = 2045,
  [SMALL_STATE(125)] = 2052,
  [SMALL_STATE(126)] = 2059,
  [SMALL_STATE(127)] = 2066,
  [SMALL_STATE(128)] = 2073,
  [SMALL_STATE(129)] = 2080,
  [SMALL_STATE(130)] = 2087,
  [SMALL_STATE(131)] = 2094,
  [SMALL_STATE(132)] = 2101,
  [SMALL_STATE(133)] = 2108,
  [SMALL_STATE(134)] = 2115,
  [SMALL_STATE(135)] = 2122,
  [SMALL_STATE(136)] = 2129,
  [SMALL_STATE(137)] = 2136,
  [SMALL_STATE(138)] = 2143,
  [SMALL_STATE(139)] = 2150,
  [SMALL_STATE(140)] = 2157,
  [SMALL_STATE(141)] = 2164,
  [SMALL_STATE(142)] = 2171,
  [SMALL_STATE(143)] = 2178,
  [SMALL_STATE(144)] = 2185,
  [SMALL_STATE(145)] = 2192,
  [SMALL_STATE(146)] = 2199,
  [SMALL_STATE(147)] = 2206,
  [SMALL_STATE(148)] = 2213,
  [SMALL_STATE(149)] = 2220,
  [SMALL_STATE(150)] = 2227,
  [SMALL_STATE(151)] = 2234,
  [SMALL_STATE(152)] = 2241,
  [SMALL_STATE(153)] = 2248,
  [SMALL_STATE(154)] = 2255,
  [SMALL_STATE(155)] = 2262,
  [SMALL_STATE(156)] = 2269,
  [SMALL_STATE(157)] = 2276,
  [SMALL_STATE(158)] = 2283,
  [SMALL_STATE(159)] = 2290,
  [SMALL_STATE(160)] = 2297,
  [SMALL_STATE(161)] = 2304,
  [SMALL_STATE(162)] = 2311,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
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
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 6, .production_id = 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 5, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 8, .production_id = 14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_definition, 4, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 5, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 6, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(137),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(124),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(134),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 11),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 15),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_permission_expr, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 4, .production_id = 12),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 12),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(73),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(54),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_permission_expr, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission, 5, .production_id = 13),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_expr, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(72),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_object_repeat1, 2), SHIFT_REPEAT(66),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 16),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_type, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 15),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_trait, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_type, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_relation_expr, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expiration_trait, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 16),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_expr, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_relation_expr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(107),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(120),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5, .production_id = 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(144),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 8),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
