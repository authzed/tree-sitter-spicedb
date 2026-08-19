#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 5
#define TOKEN_COUNT 36
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
  anon_sym_DASH_GT = 19,
  anon_sym_DOT = 20,
  anon_sym_any = 21,
  anon_sym_all = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_relation = 25,
  anon_sym_PIPE = 26,
  anon_sym_permission = 27,
  anon_sym_EQ = 28,
  anon_sym_nil = 29,
  sym_self_expression = 30,
  anon_sym_PLUS = 31,
  anon_sym_AMP = 32,
  anon_sym_DASH = 33,
  anon_sym_caveat = 34,
  aux_sym_caveat_expr_token1 = 35,
  sym_source_file = 36,
  sym__top_level = 37,
  sym_parameter_identifier = 38,
  sym_parameter_type_identifier = 39,
  sym_object_definition = 40,
  sym_use_flag = 41,
  sym_import = 42,
  sym_partial_definition = 43,
  sym_partial_reference = 44,
  sym_relation_type = 45,
  sym_wildcard_type = 46,
  sym_reference_type = 47,
  sym_caveat = 48,
  sym_userset = 49,
  sym_arrow_expression = 50,
  sym_relation = 51,
  sym_relation_expr = 52,
  sym_unary_relation_expr = 53,
  sym_binary_relation_expr = 54,
  sym_permission = 55,
  sym_permission_type_annotation = 56,
  sym_permission_expr = 57,
  sym_unary_permission_expr = 58,
  sym_parenthesized_permission_expression = 59,
  sym_binary_permission_expr = 60,
  sym_caveat_definition = 61,
  sym_parameter = 62,
  sym_caveat_expr = 63,
  sym_caveat_object = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_parameter_type_identifier_repeat1 = 66,
  aux_sym_object_definition_repeat1 = 67,
  aux_sym_permission_type_annotation_repeat1 = 68,
  aux_sym_caveat_definition_repeat1 = 69,
  aux_sym_caveat_expr_repeat1 = 70,
  alias_sym_cel_variable_identifier = 71,
  alias_sym_field_identifier = 72,
  alias_sym_func_identifier = 73,
  alias_sym_method_identifier = 74,
  alias_sym_type_identifier = 75,
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
  [sym_caveat] = "caveat",
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
  [sym_caveat] = sym_caveat,
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
  [sym_caveat] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(41);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '/') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_import_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_self_expression);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_caveat_expr_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
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
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_caveat);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 10},
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
    [sym_source_file] = STATE(108),
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
  [62] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(43), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [80] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(47), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [98] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(60), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [128] = 5,
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
  [150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(67), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(75), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [190] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(30), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [220] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(29), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [250] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(23), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(79), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(22), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [328] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_qualified_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_nil,
    ACTIONS(57), 1,
      sym_self_expression,
    STATE(8), 1,
      sym_arrow_expression,
    STATE(21), 1,
      sym_permission_expr,
    STATE(20), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
    STATE(26), 2,
      sym_userset,
      sym_parenthesized_permission_expression,
  [358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_with,
    STATE(50), 1,
      sym_caveat,
    ACTIONS(83), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    STATE(24), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(104), 1,
      anon_sym_relation,
    ACTIONS(107), 1,
      anon_sym_permission,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(25), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(114), 7,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(114), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
  [509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 1,
      anon_sym_relation,
    ACTIONS(97), 1,
      anon_sym_permission,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(18), 4,
      sym_partial_reference,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 8,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_DASH,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_with,
    STATE(51), 1,
      sym_caveat,
    ACTIONS(128), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(130), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(134), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_qualified_identifier,
    STATE(52), 1,
      sym_relation_type,
    STATE(53), 1,
      sym_relation_expr,
    STATE(28), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(54), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_qualified_identifier,
    STATE(52), 1,
      sym_relation_type,
    STATE(56), 1,
      sym_relation_expr,
    STATE(28), 2,
      sym_wildcard_type,
      sym_reference_type,
    STATE(54), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [678] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [688] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [698] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [708] = 1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [730] = 1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [740] = 1,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [750] = 1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_with,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [772] = 1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [782] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
      anon_sym_use,
      anon_sym_import,
      anon_sym_partial,
      anon_sym_caveat,
  [792] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      aux_sym_caveat_expr_token1,
    STATE(95), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [809] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      aux_sym_caveat_expr_token1,
    STATE(48), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [826] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      aux_sym_caveat_expr_token1,
    STATE(46), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [843] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    STATE(46), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [860] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_caveat_expr_token1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [877] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      aux_sym_caveat_expr_token1,
    STATE(112), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    ACTIONS(190), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_PIPE,
      anon_sym_permission,
  [973] = 5,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      aux_sym_caveat_expr_token1,
    STATE(111), 1,
      sym_caveat_expr,
    STATE(47), 2,
      sym_caveat_object,
      aux_sym_caveat_expr_repeat1,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_relation,
      anon_sym_permission,
  [1000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_qualified_identifier,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_parameter,
    STATE(77), 1,
      sym_parameter_identifier,
  [1016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(86), 1,
      sym_permission_type_annotation,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_caveat_definition_repeat1,
  [1070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_PIPE,
    ACTIONS(222), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_caveat_definition_repeat1,
  [1096] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_caveat_definition_repeat1,
  [1131] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_caveat_expr_token1,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_GT,
    STATE(76), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_PIPE,
    ACTIONS(246), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym_permission_type_annotation_repeat1,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_qualified_identifier,
    STATE(77), 1,
      sym_parameter_identifier,
    STATE(84), 1,
      sym_parameter,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_parameter_type_identifier_repeat1,
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_qualified_identifier,
    STATE(83), 1,
      sym_parameter_type_identifier,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_PIPE,
      anon_sym_EQ,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_qualified_identifier,
    STATE(80), 1,
      sym_parameter_type_identifier,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_qualified_identifier,
    STATE(70), 1,
      sym_parameter_type_identifier,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_any,
      anon_sym_all,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_any,
      anon_sym_all,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_EQ,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_qualified_identifier,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COLON,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_qualified_identifier,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_identifier,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_qualified_identifier,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_qualified_identifier,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_qualified_identifier,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_qualified_identifier,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_qualified_identifier,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_qualified_identifier,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_qualified_identifier,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_STAR,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_qualified_identifier,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_qualified_identifier,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_qualified_identifier,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_import_token1,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 358,
  [SMALL_STATE(17)] = 381,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 461,
  [SMALL_STATE(22)] = 475,
  [SMALL_STATE(23)] = 491,
  [SMALL_STATE(24)] = 509,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 553,
  [SMALL_STATE(27)] = 567,
  [SMALL_STATE(28)] = 581,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 617,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 657,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 688,
  [SMALL_STATE(35)] = 698,
  [SMALL_STATE(36)] = 708,
  [SMALL_STATE(37)] = 718,
  [SMALL_STATE(38)] = 730,
  [SMALL_STATE(39)] = 740,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 760,
  [SMALL_STATE(42)] = 772,
  [SMALL_STATE(43)] = 782,
  [SMALL_STATE(44)] = 792,
  [SMALL_STATE(45)] = 809,
  [SMALL_STATE(46)] = 826,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 860,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 894,
  [SMALL_STATE(51)] = 905,
  [SMALL_STATE(52)] = 916,
  [SMALL_STATE(53)] = 927,
  [SMALL_STATE(54)] = 940,
  [SMALL_STATE(55)] = 951,
  [SMALL_STATE(56)] = 962,
  [SMALL_STATE(57)] = 973,
  [SMALL_STATE(58)] = 990,
  [SMALL_STATE(59)] = 1000,
  [SMALL_STATE(60)] = 1016,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1044,
  [SMALL_STATE(63)] = 1057,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1083,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1105,
  [SMALL_STATE(68)] = 1118,
  [SMALL_STATE(69)] = 1131,
  [SMALL_STATE(70)] = 1140,
  [SMALL_STATE(71)] = 1153,
  [SMALL_STATE(72)] = 1162,
  [SMALL_STATE(73)] = 1175,
  [SMALL_STATE(74)] = 1188,
  [SMALL_STATE(75)] = 1201,
  [SMALL_STATE(76)] = 1210,
  [SMALL_STATE(77)] = 1223,
  [SMALL_STATE(78)] = 1233,
  [SMALL_STATE(79)] = 1241,
  [SMALL_STATE(80)] = 1251,
  [SMALL_STATE(81)] = 1259,
  [SMALL_STATE(82)] = 1269,
  [SMALL_STATE(83)] = 1277,
  [SMALL_STATE(84)] = 1285,
  [SMALL_STATE(85)] = 1293,
  [SMALL_STATE(86)] = 1301,
  [SMALL_STATE(87)] = 1308,
  [SMALL_STATE(88)] = 1315,
  [SMALL_STATE(89)] = 1322,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1336,
  [SMALL_STATE(92)] = 1343,
  [SMALL_STATE(93)] = 1350,
  [SMALL_STATE(94)] = 1357,
  [SMALL_STATE(95)] = 1364,
  [SMALL_STATE(96)] = 1371,
  [SMALL_STATE(97)] = 1378,
  [SMALL_STATE(98)] = 1385,
  [SMALL_STATE(99)] = 1392,
  [SMALL_STATE(100)] = 1399,
  [SMALL_STATE(101)] = 1406,
  [SMALL_STATE(102)] = 1413,
  [SMALL_STATE(103)] = 1420,
  [SMALL_STATE(104)] = 1427,
  [SMALL_STATE(105)] = 1434,
  [SMALL_STATE(106)] = 1441,
  [SMALL_STATE(107)] = 1448,
  [SMALL_STATE(108)] = 1455,
  [SMALL_STATE(109)] = 1462,
  [SMALL_STATE(110)] = 1469,
  [SMALL_STATE(111)] = 1476,
  [SMALL_STATE(112)] = 1483,
  [SMALL_STATE(113)] = 1490,
  [SMALL_STATE(114)] = 1497,
  [SMALL_STATE(115)] = 1504,
  [SMALL_STATE(116)] = 1511,
  [SMALL_STATE(117)] = 1518,
  [SMALL_STATE(118)] = 1525,
  [SMALL_STATE(119)] = 1532,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 6, .production_id = 19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1, .production_id = 9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow_expression, 3, .production_id = 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(102),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(99),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_permission_expression, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 4, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_definition, 5, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3, .production_id = 14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 9, .production_id = 18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_flag, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_type, 3, .production_id = 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 8, .production_id = 13),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat_definition, 7, .production_id = 11),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(45),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caveat_expr_repeat1, 2), SHIFT_REPEAT(46),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_expr, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_type, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat, 2, .production_id = 15),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_reference, 2, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2), SHIFT_REPEAT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caveat_definition_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2), SHIFT_REPEAT(79),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_type_identifier_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caveat_object, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_type_annotation, 3),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2), SHIFT_REPEAT(92),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_type_annotation_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type_identifier, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_identifier, 1, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
