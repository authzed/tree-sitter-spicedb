/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'spicedb',

  extras: $ => [
    $.comment,
    /[ \t]/,
  ],

  word: $ => $._identifier,

  inline: $ => [
    $.object_identifier,
    $.relation_identifier,
    $.permission_identifier,
    $.caveat_identifier,
  ],

  externals: $ => [
    $._identifier,
    $._use_self_flag,
    $._use_expiration_flag,
    $._use_partial_flag,
    $._use_import_flag,
    $._use_typechecking_flag,
    $._definition_keyword,
    $._caveat_keyword,
    $._self_keyword,
    $._expiration_keyword,
    $._and_keyword,
    $._nil_keyword,
    $._partial_keyword,
    $._import_keyword,
    $._relation_ellipsis,
    $._pipe,
    $._semicolon,
    $._newline,
    $._error_sentinel,
  ],

  rules: {
    source_file: $ => repeat(choice($._top_level, $._statement_terminator)),
    _statement_terminator: $ => choice(alias($._semicolon, ';'), $._newline),
    _top_level: $ => choice(
      $.use_flag,
      $.import,
      $.object_definition,
      $.partial_definition,
      $.caveat_definition,
      $.comment,
    ),

    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    identifier: $ => $._identifier,
    qualified_identifier: $ => seq(
      $.identifier,
      repeat(seq('/', repeat($._newline), $.identifier)),
    ),
    object_identifier: $ => alias($.qualified_identifier, $.type_identifier),
    relation_identifier: $ => alias($.identifier, $.field_identifier),
    permission_identifier: $ => alias($.identifier, $.method_identifier),

    caveat_identifier: $ => alias($.qualified_identifier, $.func_identifier),
    parameter_identifier: $ => alias($.identifier, $.cel_variable_identifier),
    parameter_type_identifier: $ => seq(
      alias($.identifier, $.cel_type_identifier),
      optional(seq(
        '<',
        repeat($._newline),
        $.parameter_type_identifier,
        repeat(seq(',', repeat($._newline), $.parameter_type_identifier)),
        '>',
      )),
    ),

    object_definition: $ => seq(
      alias($._definition_keyword, 'definition'),
      field('name', $.object_identifier),
      '{',
      repeat($._statement_terminator),
      repeat(seq(
        field('body', choice($.relation, $.permission, $.partial_reference)),
        repeat1($._statement_terminator),
      )),
      '}',
    ),

    use_flag: $ => seq('use', field('name', choice(
      alias($._use_self_flag, $.identifier),
      alias($._use_expiration_flag, $.identifier),
      alias($._use_partial_flag, $.identifier),
      alias($._use_import_flag, $.identifier),
      alias($._use_typechecking_flag, $.identifier),
    ))),
    import: $ => seq($._import_keyword, field('path', $.string_literal)),
    string_literal: _ => token(choice(
      /"[^"\r\n]*"/,
      /'[^'\r\n]*'/,
      /"""([^\"]|"[^\"]|""[^\"])*"""/,
    )),

    partial_definition: $ => seq(
      $._partial_keyword,
      field('name', $.object_identifier),
      '{',
      repeat($._statement_terminator),
      repeat(seq(
        field('body', choice($.relation, $.permission, $.partial_reference)),
        repeat1($._statement_terminator),
      )),
      '}',
    ),

    partial_reference: $ => seq('...', repeat($._newline), field('name', $.identifier)),

    relation_type: $ => seq(
      choice($.object_identifier, $.wildcard_type, $.reference_type),
      optional($.relation_trait),
    ),
    wildcard_type: $ => seq($.object_identifier, ':', repeat($._newline), '*'),
    reference_type: $ => seq(
      $.object_identifier,
      '#',
      repeat($._newline),
      choice($.relation_identifier, alias($._relation_ellipsis, '...')),
    ),
    relation_trait: $ => choice($.expiration_trait, $.caveat_with_expiration),
    expiration_trait: $ => seq('with', $._expiration_keyword),
    caveat_with_expiration: $ => seq(
      'with',
      $.caveat_identifier,
      optional(seq($._and_keyword, $._expiration_keyword)),
    ),

    userset: $ => choice($.relation_identifier, $.arrow_expression),
    arrow_expression: $ => prec.left(4, seq(
      choice($.relation_identifier, $.arrow_expression),
      choice(
        seq('->', repeat($._newline), $.relation_identifier),
        seq(
          '.',
          repeat($._newline),
          choice('any', 'all'),
          '(',
          repeat($._newline),
          $.relation_identifier,
          ')',
        ),
      ),
    )),

    relation: $ => seq(
      'relation',
      field('name', $.relation_identifier),
      ':',
      repeat($._newline),
      field('expr', $.relation_expr),
    ),
    relation_expr: $ => choice($.unary_relation_expr, $.binary_relation_expr),
    unary_relation_expr: $ => prec.left(2, $.relation_type),
    binary_relation_expr: $ => prec.left(1, seq(
      $.relation_expr,
      alias($._pipe, '|'),
      repeat($._newline),
      $.relation_expr,
    )),

    permission: $ => seq(
      'permission',
      field('name', $.permission_identifier),
      optional(field('type', $.permission_type_annotation)),
      '=',
      repeat($._newline),
      field('expr', $.permission_expr),
    ),
    permission_type_annotation: $ => seq(
      ':',
      repeat($._newline),
      $.identifier,
      repeat(seq(alias($._pipe, '|'), repeat($._newline), $.identifier)),
    ),
    permission_expr: $ => choice(alias($._nil_keyword, 'nil'), $.unary_permission_expr, $.binary_permission_expr),
    unary_permission_expr: $ => choice(
      $.userset,
      $.self_expression,
      $.parenthesized_permission_expression,
    ),
    self_expression: $ => $._self_keyword,
    parenthesized_permission_expression: $ => seq('(', repeat($._newline), $.permission_expr, ')'),
    binary_permission_expr: $ => choice(
      prec.left(3, seq($.permission_expr, '+', repeat($._newline), $.permission_expr)),
      prec.left(2, seq($.permission_expr, '&', repeat($._newline), $.permission_expr)),
      prec.left(1, seq($.permission_expr, '-', repeat($._newline), $.permission_expr)),
    ),

    caveat_definition: $ => seq(
      alias($._caveat_keyword, 'caveat'),
      field('name', $.caveat_identifier),
      '(',
      repeat($._newline),
      field('parameters', seq(
        $.parameter,
        repeat(seq(',', repeat($._newline), $.parameter)),
      )),
      ')',
      '{',
      field('expr', $.caveat_expr),
      '}',
    ),
    parameter: $ => prec.left(seq(
      field('name', $.parameter_identifier),
      field('type', $.parameter_type_identifier),
    )),

    caveat_expr: $ => seq(
      repeat(choice($.caveat_whitespace, $.caveat_comment)),
      $._caveat_content,
      repeat(choice($.caveat_whitespace, $.caveat_comment, $._caveat_content)),
    ),
    _caveat_content: $ => choice($.caveat_text, $.caveat_string, $.caveat_object),
    caveat_text: _ => token(/[^\s{}"']+/),
    caveat_whitespace: _ => token(/\s+/),
    caveat_string: _ => token(choice(
      /"""([^\"]|"[^\"]|""[^\"])*"""/,
      /"([^"\\\r\n]|\\[^\r\n])*"/,
      /'([^'\\\r\n]|\\[^\r\n])*'/,
    )),
    caveat_comment: _ => token(prec(1, choice(
      seq('//', /[^\r\n]*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    ))),
    caveat_object: $ => seq('{', repeat(choice(
      $.caveat_whitespace,
      $.caveat_text,
      $.caveat_string,
      $.caveat_comment,
      $.caveat_object,
    )), '}'),
  },
});
