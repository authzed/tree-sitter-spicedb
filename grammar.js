/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'spicedb',

  extras: $ => [
    $.comment,
    /[ \t\r]/,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $.object_identifier,
    $.relation_identifier,
    $.permission_identifier,
    $.caveat_identifier,
  ],

  rules: {
    source_file: $ => repeat(choice($._top_level, $._statement_terminator)),
    _statement_terminator: _ => choice(';', '\n', '\r'),
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

    identifier: _ => token(prec(-1, /[a-zA-Z0-9_\u0080-\uFFFF]+/)),
    qualified_identifier: _ => token(prec(-1, /[a-zA-Z0-9_\u0080-\uFFFF]+(\/[a-zA-Z0-9_\u0080-\uFFFF]+)*/)),
    object_identifier: $ => alias($.qualified_identifier, $.type_identifier),
    relation_identifier: $ => alias($.identifier, $.field_identifier),
    permission_identifier: $ => alias($.identifier, $.method_identifier),

    caveat_identifier: $ => alias($.qualified_identifier, $.func_identifier),
    parameter_identifier: $ => alias($.identifier, $.cel_variable_identifier),
    parameter_type_identifier: $ => seq(
      alias($.identifier, $.cel_type_identifier),
      optional(seq(
        '<',
        $.parameter_type_identifier,
        repeat(seq(',', $.parameter_type_identifier)),
        '>',
      )),
    ),

    object_definition: $ => seq(
      'definition',
      field('name', $.object_identifier),
      '{',
      repeat($._statement_terminator),
      repeat(seq(
        field('body', choice($.relation, $.permission, $.partial_reference)),
        repeat1($._statement_terminator),
      )),
      '}',
    ),

    use_flag: $ => seq('use', field('name', $.identifier)),
    import: $ => seq('import', field('path', $.string_literal)),
    string_literal: _ => token(choice(
      /"[^"\n]*"/,
      /'[^'\n]*'/,
      /"""([^"\n]|"[^"\n]|""[^"\n]|\n)*"""/,
    )),

    partial_definition: $ => seq(
      'partial',
      field('name', $.object_identifier),
      '{',
      repeat($._statement_terminator),
      repeat(seq(
        field('body', choice($.relation, $.permission, $.partial_reference)),
        repeat1($._statement_terminator),
      )),
      '}',
    ),

    partial_reference: $ => seq('...', field('name', $.identifier)),

    relation_type: $ => seq(
      choice($.object_identifier, $.wildcard_type, $.reference_type),
      optional($.relation_trait),
    ),
    wildcard_type: $ => seq($.object_identifier, ':', '*'),
    reference_type: $ => seq($.object_identifier, '#', choice($.relation_identifier, '...')),
    relation_trait: $ => choice($.expiration_trait, $.caveat_with_expiration),
    expiration_trait: _ => seq('with', 'expiration'),
    caveat_with_expiration: $ => seq(
      'with',
      $.caveat_identifier,
      optional(seq('and', 'expiration')),
    ),

    userset: $ => choice($.relation_identifier, $.arrow_expression),
    arrow_expression: $ => prec.left(4, seq(
      choice($.relation_identifier, $.arrow_expression),
      choice(
        seq('->', $.relation_identifier),
        seq('.', choice('any', 'all'), '(', $.relation_identifier, ')'),
      ),
    )),

    relation: $ => seq(
      'relation',
      field('name', $.relation_identifier),
      ':',
      field('expr', $.relation_expr),
    ),
    relation_expr: $ => choice($.unary_relation_expr, $.binary_relation_expr),
    unary_relation_expr: $ => prec.left(2, $.relation_type),
    binary_relation_expr: $ => prec.left(1, seq($.relation_expr, '|', $.relation_expr)),

    permission: $ => seq(
      'permission',
      field('name', $.permission_identifier),
      optional(field('type', $.permission_type_annotation)),
      '=',
      field('expr', $.permission_expr),
    ),
    permission_type_annotation: $ => seq(
      ':',
      $.identifier,
      repeat(seq('|', $.identifier)),
    ),
    permission_expr: $ => choice('nil', $.unary_permission_expr, $.binary_permission_expr),
    unary_permission_expr: $ => choice(
      $.userset,
      $.self_expression,
      $.parenthesized_permission_expression,
    ),
    self_expression: _ => 'self',
    parenthesized_permission_expression: $ => seq('(', $.permission_expr, ')'),
    binary_permission_expr: $ => choice(
      prec.left(3, seq($.permission_expr, '+', $.permission_expr)),
      prec.left(2, seq($.permission_expr, '&', $.permission_expr)),
      prec.left(1, seq($.permission_expr, '-', $.permission_expr)),
    ),

    caveat_definition: $ => seq(
      'caveat',
      field('name', $.caveat_identifier),
      '(',
      field('parameters', seq($.parameter, repeat(seq(',', $.parameter)))),
      ')',
      '{',
      field('expr', $.caveat_expr),
      '}',
    ),
    parameter: $ => prec.left(seq(
      field('name', $.parameter_identifier),
      field('type', $.parameter_type_identifier),
    )),

    caveat_expr: $ => repeat1(choice(
      /[^{}"'\/]+/,
      $.caveat_string,
      $.caveat_comment,
      $.caveat_object,
    )),
    caveat_string: _ => token(choice(
      /"""([^"\n]|"[^"\n]|""[^"\n]|\n)*"""/,
      /"([^"\\]|\\.)*"/,
      /'([^'\\]|\\.)*'/,
    )),
    caveat_comment: _ => token(prec(1, choice(
      seq('//', /[^\r\n]*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    ))),
    caveat_object: $ => seq('{', repeat(choice(
      /[^{}"'\/]+/,
      $.caveat_string,
      $.caveat_comment,
      $.caveat_object,
    )), '}'),
  },
});
