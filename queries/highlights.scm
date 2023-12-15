; Based on the Go tree-sitter repo:
; https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/queries/highlights.scm

; Identifiers

(identifier) @variable

; Function call

(call_expression
  function: (identifier) @function.builtin
  (.match? @function.builtin "^(all|any|assert|bool|buffer|byte_slice|byte|call|cat|cd|chr|cp|decode|delete|encode|error|float_slice|float|getattr|getenv|hash|int|iter|keys|len|list|ls|map|ord|print|printf|reversed|set|setenv|sorted|sprintf|string|try|type|unsetenv)$"))

(call_expression
  function: (identifier) @function)

; Function declaration

(parameter_list
  (parameter_declaration
   name: (identifier) @parameter))

(parameter_list
  (parameter_declaration_default
   name: (identifier) @parameter))

; Operators

[
  ;"--"
  ;"-"
  "-="
  ":="
  ;"!"
  ;"!="
  ;"..."
  ;"*"
  ;"*"
  "*="
  ;"/"
  "/="
  ;"&"
  ;"&&"
  ;"&="
  ;"%"
  ;"%="
  ;"^"
  ;"^="
  ;"+"
  ;"++"
  "+="
  ;"<-"
  ;"<"
  ;"<<"
  ;"<<="
  ;"<="
  "="
  ;"=="
  ;">"
  ;">="
  ;">>"
  ;">>="
  ;"|"
  ;"|="
  ;"||"
  ;"~"
] @operator

[
  ;";"
  ;"."
  ","
  ;":"
] @punctuation.delimiter

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
  ;"break"
  ;"case"
  "const"
  ;"continue"
  ;"default"
  ;"else"
  ;"false"
  ;"for"
  "func"
  ;"if"
  ;"import"
  ;"in"
  ;"nil"
  ;"range"
  ;"switch"
  ;"true"
  "var"
] @keyword

[
  "return"
] @keyword.return

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

[
  (true)
  (false)
  (nil)
] @constant.builtin

(comment) @comment

((source_file . (comment) @preproc)
 (#lua-match? @preproc "^#!/"))
