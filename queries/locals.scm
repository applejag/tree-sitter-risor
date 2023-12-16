;; Definitions

(function_declaration
  name: ((identifier) @definition.var)
    (#set! "definition.var.scope" "parent"))

(parameter_declaration
  name: (identifier) @definition.parameter)

(short_var_declaration
  left: (expression_list
    (identifier) @definition.var))

(var_declaration
  name: (expression_list
          (identifier) @definition.var))

(const_declaration
  name: (expression_list
          (identifier) @definition.constant))

(import_statement
  name: (identifier) @definition.import
  !as)

(import_statement
  as: (import_statement_as
    (identifier) @definition.import))

;;; References

(identifier) @reference
(field_identifier) @reference

;;; Call references

((call_expression
   function: (identifier) @reference)
 (#set! reference.kind "call" ))

((call_expression
    function: (selector_expression
                field: (field_identifier) @reference))
 (#set! reference.kind "call" ))

((call_expression
    function: (parenthesized_expression
                (identifier) @reference))
 (#set! reference.kind "call" ))

((call_expression
   function: (parenthesized_expression
               (selector_expression
                 field: (field_identifier) @reference)))
 (#set! reference.kind "call" ))

;; Scopes

;(func_literal) @scope
(source_file) @scope
(function_declaration) @scope
(if_statement) @scope
(block) @scope
(switch_statement) @scope
(for_statement) @scope
