module.exports = grammar({
  name: 'eex',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.text,
      $.comment,
      $.directive
    ),

    directive: $ => seq(
      choice('<%', '<%=', '<%%', '<%%='),
      prec.left(
        seq(
          optional(choice($.partial_expression, $.expression)),
          '%>',
        )
      )
    ),

    partial_expression: $ => choice(
      seq(field("kind", alias(/end[\)\]\}]*/, "end")), repeat($._code)),
      prec.right(seq(repeat($._code), field("kind", choice("do", "->")))),
    ),

    expression: $ => repeat1($._code),

    comment: $ => choice($._hash_comment, $._bang_comment),

    _hash_comment: $ => seq(
      '<%#',
      prec.left(
        seq(
          repeat($._code),
          '%>'
        )
      )
    ),

    _bang_comment: $ => seq(
      '<%!--',
      prec.left(
        seq(
          repeat(/[^-]+|-/),
          '--%>'
        )
      )
    ),

    text: $ => /[^<]+|</,

    _code: $ => /[^%\s]+|[%\s]/,
}})
