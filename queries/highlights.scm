; Based on the Go tree-sitter repo:
; https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/queries/highlights.scm

; Identifiers

(identifier) @variable
(field_identifier) @property

; Function call

(call_expression
  function: (identifier) @function.builtin
  (.match? @function.builtin "^(all|any|assert|bool|buffer|byte_slice|byte|call|cat|cd|chr|cp|decode|delete|encode|error|float_slice|float|getattr|getenv|hash|int|iter|keys|len|list|ls|map|ord|print|printf|reversed|set|setenv|sorted|sprintf|string|try|type|unsetenv)$"))

(call_expression
  function: (identifier) @function)

(call_expression
  function: (selector_expression
    field: (field_identifier) @function.method))

; Function declaration

(parameter_list
  (parameter_declaration
   name: (identifier) @parameter))

(parameter_list
  (parameter_declaration_default
   name: (identifier) @parameter))

; Operators

[
  "--"
  "-"
  "-="
  ":="
  "!"
  "!="
  "**"
  "*"
  "*="
  "/"
  "/="
  "&"
  "&&"
  "%"
  "^"
  "+"
  "++"
  "+="
  "<"
  "<<"
  "<="
  "="
  "=="
  ">"
  ">="
  ">>"
  "|"
  "||"
  "?"
] @operator

[
  ";"
  "."
  ","
  ":"
] @punctuation.delimiter

(conditional_expression
  [":"] @operator)

[
  "["
  "]"
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

; Keywords

[
  "const"
  "var"
] @keyword

[
  "func"
] @keyword.function

[
  "for"
  "range"
  "break"
  "continue"
] @keyword @repeat

[
  "if"
  "else"
  "switch"
  "case"
  "default"
] @keyword @conditional

[
  "import"
  "from"
  "as"
] @keyword @include

[
  "return"
] @keyword.return

; Literals

[
  (string)
  (string_template_char)
  "'"
  (string_backtick)
] @string

(escape_sequence) @string.escape
(escape_sequence_invalid) @error
(format_sequence) @string.special
(string_template_argument) @punctuation.special

[
  (int_literal)
  (float_literal)
] @number

[
  (true)
  (false)
  (nil)
] @constant.builtin

(comment) @comment

((source_file . (comment) @preproc)
 (#lua-match? @preproc "^#!/"))
