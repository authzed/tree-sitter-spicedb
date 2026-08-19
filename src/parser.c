#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 5
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

enum {
  sym_identifier = 1,
  sym_comment = 2,
  sym_qualified_identifier = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_definition = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_use = 10,
  anon_sym_import = 11,
  aux_sym_import_token1 = 12,
  anon_sym_partial = 13,
  anon_sym_DOT_DOT_DOT = 14,
  anon_sym_COLON = 15,
  anon_sym_STAR = 16,
  anon_sym_POUND = 17,
  anon_sym_with = 18,
  anon_sym_expiration = 19,
  anon_sym_and = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_DOT = 22,
  anon_sym_any = 23,
  anon_sym_all = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_relation = 27,
  anon_sym_PIPE = 28,
  anon_sym_permission = 29,
  anon_sym_EQ = 30,
  anon_sym_nil = 31,
  sym_self_expression = 32,
  anon_sym_PLUS = 33,
  anon_sym_AMP = 34,
  anon_sym_DASH = 35,
  anon_sym_caveat = 36,
  aux_sym_caveat_expr_token1 = 37,
  sym_source_file = 38,
  sym__top_level = 39,
  sym_parameter_identifier = 40,
  sym_parameter_type_identifier = 41,
  sym_object_definition = 42,
  sym_use_flag = 43,
  sym_import = 44,
  sym_partial_definition = 45,
  sym_partial_reference = 46,
  sym_relation_type = 47,
  sym_wildcard_type = 48,
  sym_reference_type = 49,
  sym_relation_trait = 50,
  sym_expiration_trait = 51,
  sym_caveat_with_expiration = 52,
  sym_userset = 53,
  sym_arrow_expression = 54,
  sym_relation = 55,
  sym_relation_expr = 56,
  sym_unary_relation_expr = 57,
  sym_binary_relation_expr = 58,
  sym_permission = 59,
  sym_permission_type_annotation = 60,
  sym_permission_expr = 61,
  sym_unary_permission_expr = 62,
  sym_parenthesized_permission_expression = 63,
  sym_binary_permission_expr = 64,
  sym_caveat_definition = 65,
  sym_parameter = 66,
  sym_caveat_expr = 67,
  sym_caveat_object = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_parameter_type_identifier_repeat1 = 70,
  aux_sym_object_definition_repeat1 = 71,
  aux_sym_permission_type_annotation_repeat1 = 72,
  aux_sym_caveat_definition_repeat1 = 73,
  aux_sym_caveat_expr_repeat1 = 74,
  alias_sym_cel_variable_identifier = 75,
  alias_sym_field_identifier = 76,
  alias_sym_func_identifier = 77,
  alias_sym_method_identifier = 78,
  alias_sym_type_identifier = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_qualified_identifier] = "cel_type_identifier",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_definition] = "definition",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_use] = "use",
  [anon_sym_import] = "import",
  [aux_sym_import_token1] = "import_token1",
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
  [aux_sym_permission_type_annotation_repeat1] = "permission_type_annotation_repeat1",
  [aux_sym_caveat_definition_repeat1] = "caveat_definition_repeat1",
  [aux_sym_caveat_expr_repeat1] = "caveat_expr_repeat1",
  [alias_sym_cel_variable_identifier] = "cel_variable_identifier",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_func_identifier] = "func_identifier",
  [alias_sym_method_identifier] = "method_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [aux_sym_import_token1] = aux_sym_import_token1,
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
  [aux_sym_permission_type_annotation_repeat1] = aux_sym_permission_type_annotation_repeat1,
  [aux_sym_caveat_definition_repeat1] = aux_sym_caveat_definition_repeat1,
  [aux_sym_caveat_expr_repeat1] = aux_sym_caveat_expr_repeat1,
  [alias_sym_cel_variable_identifier] = alias_sym_cel_variable_identifier,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_func_identifier] = alias_sym_func_identifier,
  [alias_sym_method_identifier] = alias_sym_method_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
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
  [aux_sym_import_token1] = {
    .visible = false,
    .named = false,
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
  [alias_sym_type_identifier] = {
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
  [3] = {.index = 0, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 2},
  [12] = {.index = 10, .length = 3},
  [13] = {.index = 13, .length = 3},
  [18] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_path, 1},
  [2] =
    {field_body, 3},
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_type, 1},
  [6] =
    {field_expr, 3},
    {field_name, 1},
  [8] =
    {field_expr, 5},
    {field_name, 1},
  [10] =
    {field_expr, 4},
    {field_name, 1},
    {field_type, 2},
  [13] =
    {field_expr, 6},
    {field_name, 1},
    {field_parameters, 3},
  [16] =
    {field_expr, 7},
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = alias_sym_type_identifier,
  },
  [4] = {
    [0] = alias_sym_cel_variable_identifier,
  },
  [5] = {
    [1] = alias_sym_type_identifier,
  },
  [7] = {
    [0] = alias_sym_type_identifier,
  },
  [8] = {
    [1] = alias_sym_field_identifier,
  },
  [9] = {
    [0] = alias_sym_field_identifier,
  },
  [10] = {
    [1] = alias_sym_method_identifier,
  },
  [11] = {
    [1] = alias_sym_func_identifier,
  },
  [12] = {
    [1] = alias_sym_method_identifier,
  },
  [13] = {
    [1] = alias_sym_func_identifier,
  },
  [14] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_field_identifier,
  },
  [15] = {
    [1] = alias_sym_func_identifier,
  },
  [16] = {
    [0] = alias_sym_field_identifier,
    [2] = alias_sym_field_identifier,
  },
  [17] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_expiration);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_self_expression);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
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
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_caveat);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_definition] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [aux_sym_import_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(111),
    [sym__top_level] = STATE(2),
    [sym_object_definition] = STATE(2),
    [sym_use_flag] = STATE(2),
    [sym_import] = STATE(2),
    [sym_partial_definition] = STATE(2),
    [sym_caveat_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_definition] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_partial] = ACTIONS(15),
    [anon_sym_caveat] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_definition,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_partial,
    ACTIONS(17), 1,
      anon_sym_caveat,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_comment,
    STATE(3), 7,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [31] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_definition,
    ACTIONS(31), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_partial,
    ACTIONS(40), 1,
      anon_sym_caveat,
    STATE(3), 7,
      sym__top_level,
      sym_object_definition,
      sym_use_flag,
      sym_import,
      sym_partial_definition,
      sym_caveat_definition,
      aux_sym_source_file_repeat1,
  [62] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_with,
    STATE(45), 1,
      sym_relation_trait,
    STATE(47), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(43), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [89] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(51), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(55), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DASH_GT,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(59), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [147] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(63), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_DASH,
    ACTIONS(75), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(29), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [229] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(26), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(83), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [277] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(24), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(22), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(87), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [355] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_qualified_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_nil,
    ACTIONS(73), 1,
      sym_self_expression,
    STATE(7), 1,
      sym_arrow_expression,
    STATE(32), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
    STATE(21), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_with,
    STATE(52), 1,
      sym_relation_trait,
    STATE(47), 2,
      sym_expiration_trait,
      sym_caveat_with_expiration,
    ACTIONS(91), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(98), 1,
      anon_sym_relation,
    ACTIONS(101), 1,
      anon_sym_permission,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(116), 1,
      anon_sym_relation,
    ACTIONS(118), 1,
      anon_sym_permission,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(110), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(116), 1,
      anon_sym_relation,
    ACTIONS(118), 1,
      anon_sym_permission,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(110), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
  [562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(116), 1,
      anon_sym_relation,
    ACTIONS(118), 1,
      anon_sym_permission,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(25), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(116), 1,
      anon_sym_relation,
    ACTIONS(118), 1,
      anon_sym_permission,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(23), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(130), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_qualified_identifier,
    STATE(53), 1,
      sym_relation_type,
    STATE(59), 1,
      sym_relation_expr,
    STATE(17), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(55), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_qualified_identifier,
    STATE(53), 1,
      sym_relation_type,
    STATE(54), 1,
      sym_relation_expr,
    STATE(17), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(55), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(136), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [686] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [708] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [718] = 1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [728] = 1,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [738] = 1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [748] = 1,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_and,
    ACTIONS(152), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [784] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [794] = 1,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [804] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [825] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      aux_sym_caveat_expr_token1,
    STATE(56), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [853] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      aux_sym_caveat_expr_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [870] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(96), 1,
      sym_caveat_expr,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [887] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(114), 1,
      sym_caveat_expr,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [904] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      aux_sym_caveat_expr_token1,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(194), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [967] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      aux_sym_caveat_expr_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [1017] = 5,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(102), 1,
      sym_caveat_expr,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [1044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_qualified_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_parameter,
    STATE(82), 1,
      sym_parameter_identifier,
  [1060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_permission_type_annotation,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_caveat_definition_repeat1,
  [1114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_EQ,
    STATE(78), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_caveat_definition_repeat1,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_GT,
    STATE(77), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_qualified_identifier,
    STATE(82), 1,
      sym_parameter_identifier,
    STATE(87), 1,
      sym_parameter,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1201] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_caveat_definition_repeat1,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1258] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_qualified_identifier,
    STATE(81), 1,
      sym_parameter_type_identifier,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_any,
      anon_sym_all,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_qualified_identifier,
    STATE(70), 1,
      sym_parameter_type_identifier,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_qualified_identifier,
    STATE(80), 1,
      sym_parameter_type_identifier,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_any,
      anon_sym_all,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_qualified_identifier,
    ACTIONS(275), 1,
      anon_sym_expiration,
  [1347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_EQ,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_qualified_identifier,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_identifier,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_qualified_identifier,
  [1411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_qualified_identifier,
  [1432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_qualified_identifier,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_qualified_identifier,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_qualified_identifier,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_qualified_identifier,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
  [1488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_STAR,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_qualified_identifier,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_expiration,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_qualified_identifier,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_qualified_identifier,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_qualified_identifier,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [1572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_import_token1,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 199,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 307,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 442,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 506,
  [SMALL_STATE(25)] = 522,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 562,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 686,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 708,
  [SMALL_STATE(36)] = 718,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 748,
  [SMALL_STATE(40)] = 758,
  [SMALL_STATE(41)] = 772,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 794,
  [SMALL_STATE(44)] = 804,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 825,
  [SMALL_STATE(47)] = 842,
  [SMALL_STATE(48)] = 853,
  [SMALL_STATE(49)] = 870,
  [SMALL_STATE(50)] = 887,
  [SMALL_STATE(51)] = 904,
  [SMALL_STATE(52)] = 921,
  [SMALL_STATE(53)] = 932,
  [SMALL_STATE(54)] = 943,
  [SMALL_STATE(55)] = 956,
  [SMALL_STATE(56)] = 967,
  [SMALL_STATE(57)] = 984,
  [SMALL_STATE(58)] = 995,
  [SMALL_STATE(59)] = 1006,
  [SMALL_STATE(60)] = 1017,
  [SMALL_STATE(61)] = 1034,
  [SMALL_STATE(62)] = 1044,
  [SMALL_STATE(63)] = 1060,
  [SMALL_STATE(64)] = 1076,
  [SMALL_STATE(65)] = 1088,
  [SMALL_STATE(66)] = 1101,
  [SMALL_STATE(67)] = 1114,
  [SMALL_STATE(68)] = 1127,
  [SMALL_STATE(69)] = 1140,
  [SMALL_STATE(70)] = 1153,
  [SMALL_STATE(71)] = 1166,
  [SMALL_STATE(72)] = 1175,
  [SMALL_STATE(73)] = 1188,
  [SMALL_STATE(74)] = 1201,
  [SMALL_STATE(75)] = 1210,
  [SMALL_STATE(76)] = 1223,
  [SMALL_STATE(77)] = 1232,
  [SMALL_STATE(78)] = 1245,
  [SMALL_STATE(79)] = 1258,
  [SMALL_STATE(80)] = 1267,
  [SMALL_STATE(81)] = 1275,
  [SMALL_STATE(82)] = 1283,
  [SMALL_STATE(83)] = 1293,
  [SMALL_STATE(84)] = 1301,
  [SMALL_STATE(85)] = 1311,
  [SMALL_STATE(86)] = 1321,
  [SMALL_STATE(87)] = 1329,
  [SMALL_STATE(88)] = 1337,
  [SMALL_STATE(89)] = 1347,
  [SMALL_STATE(90)] = 1355,
  [SMALL_STATE(91)] = 1362,
  [SMALL_STATE(92)] = 1369,
  [SMALL_STATE(93)] = 1376,
  [SMALL_STATE(94)] = 1383,
  [SMALL_STATE(95)] = 1390,
  [SMALL_STATE(96)] = 1397,
  [SMALL_STATE(97)] = 1404,
  [SMALL_STATE(98)] = 1411,
  [SMALL_STATE(99)] = 1418,
  [SMALL_STATE(100)] = 1425,
  [SMALL_STATE(101)] = 1432,
  [SMALL_STATE(102)] = 1439,
  [SMALL_STATE(103)] = 1446,
  [SMALL_STATE(104)] = 1453,
  [SMALL_STATE(105)] = 1460,
  [SMALL_STATE(106)] = 1467,
  [SMALL_STATE(107)] = 1474,
  [SMALL_STATE(108)] = 1481,
  [SMALL_STATE(109)] = 1488,
  [SMALL_STATE(110)] = 1495,
  [SMALL_STATE(111)] = 1502,
  [SMALL_STATE(112)] = 1509,
  [SMALL_STATE(113)] = 1516,
  [SMALL_STATE(114)] = 1523,
  [SMALL_STATE(115)] = 1530,
  [SMALL_STATE(116)] = 1537,
  [SMALL_STATE(117)] = 1544,
  [SMALL_STATE(118)] = 1551,
  [SMALL_STATE(119)] = 1558,
  [SMALL_STATE(120)] = 1565,
  [SMALL_STATE(121)] = 1572,
  [SMALL_STATE(122)] = 1579,
  [SMALL_STATE(123)] = 1586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1, .production_id = 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(106),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(104),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(101),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 12),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 2, .production_id = 15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 14),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_trait, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(46),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(51),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_with_expiration, 4, .production_id = 15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expiration_trait, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(85),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(72),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(98),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
