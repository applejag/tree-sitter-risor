[
  ;(import_declaration)
  (const_declaration)
  (var_declaration)
  ;(literal_value)
  (switch_case)
  (default_case)
  (block)
  (call_expression)
  (parameter_list)
] @indent.begin

[
  "}"
] @indent.branch

[
 "}"
 ")"
] @indent.end

(parameter_list ")" @indent.branch)

(comment) @indent.ignore
