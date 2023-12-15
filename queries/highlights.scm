; Based on the Go tree-sitter repo:
; https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/queries/highlights.scm

; Identifiers

;(type_identifier) @type
;(field_identifier) @property
(identifier) @variable

; Operators

;[
;  "--"
;  "-"
;  "-="
;  ":="
;  "!"
;  "!="
;  "..."
;  "*"
;  "*"
;  "*="
;  "/"
;  "/="
;  "&"
;  "&&"
;  "&="
;  "%"
;  "%="
;  "^"
;  "^="
;  "+"
;  "++"
;  "+="
;  "<-"
;  "<"
;  "<<"
;  "<<="
;  "<="
;  "="
;  "=="
;  ">"
;  ">="
;  ">>"
;  ">>="
;  "|"
;  "|="
;  "||"
;  "~"
;] @operator

; Literals

[
  (string)
  (string_template)
  (string_backtick)
] @string

[
  (escape_sequence)
  (string_template_argument)
] @escape

[
  (int_literal)
  (float_literal)
] @number

;[
;  (true)
;  (false)
;  (nil)
;] @constant.builtin

;(comment) @comment
