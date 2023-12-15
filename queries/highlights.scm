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
  (string_template_plain)
  "'"
  (string_backtick)
] @string

(escape_sequence) @string.escape
(string_template_argument) @none

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
