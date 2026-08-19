; highlights.scm

[
  "definition"
  "caveat"
  "permission"
  "relation"
  "use"
  "self"
  "partial"
  "import"
  "expiration"
  "and"
] @keyword

[
  ","
  ":"
  "."
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "|"
  "+"
  "-"
  "&"
  "#"
  "->"
  "..."
  "="
] @operator
("with") @keyword.operator

[
  "nil"
  "*"
] @constant.builtin

[
  "any"
  "all"
] @function.builtin

(comment) @comment
(string_literal) @string
(use_flag name: (identifier) @keyword)
(permission_type_annotation (identifier) @type)
(partial_reference name: (identifier) @type)
(type_identifier) @type
(cel_type_identifier) @type
(cel_variable_identifier) @variable.parameter
(field_identifier) @variable.other.member
[
  (func_identifier)
  (method_identifier)
] @function.method
