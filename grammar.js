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
          alias(repeat($._code), 'code'),
          '%>',
        )
      )
    ),

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

    _code: $ => /[^%]+|%/,
}})
