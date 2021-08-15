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
          alias(repeat1($.code), 'code'),
          '%>',
        )
      )
    ),

    comment: $ => seq(
      '<%#',
      prec.left(
        seq(
          alias(repeat1($.code), 'text'),
          '%>'
        )
      )
    ),

    text: $ => /[^<]+|</,

    code: $ => /[^%]+|%/,
}})
