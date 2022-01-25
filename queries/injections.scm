((directive (expression) @injection.content)
 (#set! injection.language "elixir"))

([
   (partial_expression)
   (newline)
 ] @injection.content
 (#set! injection.language "elixir")
 (#set! injection.include-children)
 (#set! injection.combined))
