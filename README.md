Tree-Sitter for UUAG

How to compile
```
yarn install
```

How to run examples
```
yarn run tree-sitter:generate
yarn run tree-sitter:parse examples/example-file.ag
```

# Language specification (extracted from the manual)

## Lexical Syntax

```
keywords
  = { "DATA", "EXT", "ATTR", "SEM", "TYPE" , "USE", "loc", "lhs", "INCLUDE" }

uppercase ::= ["A".. "Z"]

lowercase ::= ["a".. "z"]

any ::= [ "\0" .. "\255" ] (any character)

conid ::= uppercase identletter* except keywords

varid ::= lowercase identletter* except keywords

identletter ::= uppercase
              | lowercase
              | "'"
              | "_"

string ::= """ stringcontents """

codeblock ::= "{" codeblockcontent* "}"

codeblockcontent ::= any except "{", and "}"
                   | codeblock

layoutcodeblock ::= layoutcontent*

layoutcontent
  ::= any (except letters that are less indented than reference column)
```

## Context-free Grammar

```
ag ::= elem*

elem ::= "DATA" conid attrDecls? dataAlt*
       | "ATTR" conid+ attrDecls
       | "TYPE" conid "=" "[" type* "]"
       | "SEM" conid attrDecls? semAlt*
       | varid? codeblock
       | "INCLUDE" string

attrDecls ::= "[" inhAttrDecl* "|" synAttrDecl* "|" synAttrDecl* "]"
type ::= conid
       | codeBlock

inhAttrDecl ::= varids ":" type

varids ::= varid ("," varid)*

synAttrDecl ::= varids ("USE" codeBlock codeBlock)? ":" type

dataAlt ::= "|" conid field*

field ::= varids ":" type
        | conid

semAlt ::= "|" conid+ semDef*

semDef ::= (varid | "lhs") attrDef+
         | "loc" locDef +

attrDef ::= "." varid assign expr

locDef ::= "." pattern assign expr

expr ::= codeBlock
       | layoutCodeBlock

assign ::= "="
         | ":="

pattern ::= conid pattern1 *
          | pattern1

pattern1 ::= varid ("@" pattern1)?
           | "(" patterns? ")"
           | "_"

patterns ::= pattern ("," pattern)*
```
