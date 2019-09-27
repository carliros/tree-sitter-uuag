module.exports = grammar({
  name: 'uuag',

  rules: {
    source_file: $ => repeat($._elem),

    _elem: $ => choice(
      $.data_definition,
      $.attr_definition,
      $.type_definition,
      $.sem_definition,
      $.code_block_definition
    ),

    code_block_definition: $ => seq(
      optional($.varid),
      $.code_block
    ),

    sem_definition: $ => seq(
      $.sem_keyword,
      $.conid,
      // TODO attrDecls?
      repeat($.sem_alternatives)
    ),

    sem_alternatives: $ => prec.right(seq(
      '|',
      repeat1($.conid),
      repeat($.sem_impl)
    )),

    sem_impl: $ => choice(
      $.attribute,
      $.local_attribute
    ),

    attribute: $ => seq(
      choice($.varid, $.lhs_keyword),
      repeat1($.attr_impl)
    ),

    local_attribute: $ => seq(
      $.loc_keyword,
      $.local_attr_impl
    ),

    attr_impl: $ => seq(
      '.',
      $.varid,
      $.assign_symbol,
      $.expr
    ),

    local_attr_impl: $ => seq(
      '.',
      $.pattern,
      $.assign_symbol,
      $.expr
    ),

    expr: $ => choice(
      $.code_block
      // TODO give support to $.layout_code_block
    ),

    pattern: $ => choice(
      seq($.conid, repeat($.pattern1)),
      $.pattern1
    ),

    pattern1: $ => choice(
      seq($.varid, optional($.at_pattern1)),
      seq('(', optional($.pattern_list) ,')'),
      '_'
    ),

    at_pattern1: $ => seq(
      '@',
      $.pattern1
    ),

    pattern_list: $ => seq($.pattern, repeat(seq(',', $.pattern))),

    type_definition: $ => seq(
      $.type_keyword,
      $.conid,
      '=',
      '[',
      repeat($.type),
      ']'
    ),

    attr_definition: $ => seq(
      $.attr_keyword,
      repeat1($.conid),
      $.attr_declarations
    ),

    attr_declarations: $ => choice(
      $.old_attr_style,
      repeat1($.new_attr_style)
    ),

    old_attr_style: $ => seq(
      '[',
      repeat($.inh_attr_declaration_old_style),
      '|',
      repeat($.syn_attr_declaration_old_style),
      '|',
      repeat($.syn_attr_declaration_old_style),
      ']'
    ),

    new_attr_style: $ => choice(
      $.inh_attr_declaration_new_style,
      $.syn_attr_declaration_new_style,
      $.chn_attr_declaration_new_style
    ),

    inh_attr_declaration_new_style: $ => seq(
      $.inh_keyword,
      $.var_type_definitions
    ),

    syn_attr_declaration_new_style: $ => seq(
      $.syn_keyword,
      $.var_type_definitions //TODO doe sit support USE?
    ),

    chn_attr_declaration_new_style: $ => seq(
      $.chn_keyword,
      $.var_type_definitions //TODO doe sit support USE?
    ),

    inh_attr_declaration_old_style: $ => seq(
      $.varids,
      $.type_symbol,
      $.type
    ),

    syn_attr_declaration_old_style: $ => seq(
      $.varids,
      optional($.use_operator),
      $.type_symbol,
      $.type
    ),

    use_operator: $ => seq(
      $.use_keyword,
      $.code_block,
      $.code_block
    ),

    data_definition: $ => seq(
      $.data_keyword,
      $.conid,
      // TODO attrDecls?
      repeat($.data_alternatives)
    ),

    data_alternatives: $ => prec.right(seq(
      '|',
      $.conid,
      repeat($.field)
    )),

    field: $ => choice(
      $.var_type_definition,
      $.conid
    ),

    var_type_definitions: $ => seq(
      $.var_type_definition,
      repeat(seq(',', $.var_type_definition))
    ),

    var_type_definition: $ => seq(
      $.varid,
      $.type_symbol,
      $.type
    ),

    type: $ => choice(
      $.conid,
      $.code_block
    ),

    varids: $ => seq(
      $.varid,
      repeat(seq(',', $.varid))
    ),

    conid: $ => /[A-Z]+[a-zA-Z0-9_']*/,

    varid: $ => /[a-z]+[a-zA-Z0-9_']*/,

    code_block: $ => seq(
      '{',
      $.code_block_content,
      '}'
    ),

    code_block_content: $ => /[^{}]*/,
    // TODO unsupported case: ATTR Tree [ | | value USE { {-} } {0} : Int ]

    uppercase: $ => /[A-Z]+/,

    lowercase: $ => /[a-z]+/,

    ident_letter: $ => /[a-zA-Z0-9_']*/,

    data_keyword: $ => choice('data', 'DATA'),

    attr_keyword: $ => choice('attr', 'ATTR'),

    sem_keyword: $ => choice('sem', 'SEM'),

    type_keyword: $ => choice('type', 'TYPE'),

    use_keyword: $ => choice('use', 'USE'),

    inh_keyword: $ => choice('INH', 'inh'),

    syn_keyword: $ => choice('SYN', 'syn'),

    chn_keyword: $ => choice('CHN', 'chn'),

    lhs_keyword: $ => 'lhs',

    loc_keyword: $ => 'loc',

    type_symbol: $ => choice(':', '::'),

    assign_symbol: $ => choice('=', ':='),
  }
});
