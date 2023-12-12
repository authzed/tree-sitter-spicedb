/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'spicedb',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  word: $ => $.identifier,

  inline: $ => [
    $.object_identifier,
    $.relation_identifier,
    $.permission_identifier,
    $.caveat_identifier,
  ],

  rules: {
    source_file: $ => repeat($._top_level),
    _top_level: $ => choice($.object_definition, $.caveat_definition, $.comment),

    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    identifier: _ => RegExp('([a-z][a-z0-9_]{1,62}[a-z0-9]/)*[a-z][a-z0-9_]{1,62}[a-z0-9]'),
    object_identifier: $ => alias($.identifier, $.type_identifier),
    relation_identifier: $ => alias($.identifier, $.field_identifier),
    permission_identifier: $ => alias($.identifier, $.method_identifier),

    caveat_identifier: $ => alias($.identifier, $.func_identifier),
    parameter_identifier: $ => alias($.identifier, $.cel_variable_identifier),
    parameter_type_identifier: $ => alias($.identifier, $.cel_type_identifier),

    object_definition: $ => seq(
      'definition',
      field('name', $.object_identifier),
      '{',
      optional(field('body', repeat(choice($.relation, $.permission)))),
      '}',
    ),

    relation_type: $ => seq(
      choice($.object_identifier, $.wildcard_type, $.reference_type),
      optional($.caveat),
    ),
    wildcard_type: $ => seq($.object_identifier, ':', '*'),
    reference_type: $ => seq($.object_identifier, '#', $.relation_identifier),
    caveat: $ => seq(
      'with',
      $.caveat_identifier,
    ),

    userset: $ => choice($.relation_identifier, $.computed_userset),
    computed_userset: $ => seq($.relation_identifier, '->', $.relation_identifier),

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
      '=',
      field('expr', $.permission_expr),
    ),
    permission_expr: $ => choice("nil", $.unary_permission_expr, $.binary_permission_expr),
    unary_permission_expr: $ => prec.left(2, $.userset),
    binary_permission_expr: $ => prec.left(1, seq($.permission_expr, choice('+', '-', '&'), $.permission_expr)),

    caveat_definition: $ => seq(
      'caveat',
      field('name', $.caveat_identifier),
      '(',
      field('parameters', optional(seq($.parameter, repeat(seq(',', $.parameter))))),
      ')',
      '{',
      field('expr', $.caveat_expr),
      '}',
    ),
    parameter: $ => prec.left(seq(
      field('name', $.parameter_identifier),
      field('type', $.parameter_type_identifier),
      optional(','),
    )),

    caveat_expr: $ => $.identifier,
  },
});
