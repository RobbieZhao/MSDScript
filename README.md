# MSDScript

MSDScript is a simple interpreter written in C++.

## What does it do?

It takes user input and then parse and interpret the result. It not only supports basic arithmetic expressions but also if-else statements and user-defined functions, etc., just like most programming languages do.

## How is it implemented?

### Data type

Everything in the interpreter is an expression. A single number 2 is an expression, 2 + 3 + 4 is an expression, even a if-else statement is an expression.

### Interpreter

The interpreter consists of two parts: the parsing part and interpreting part. The program first parse the user input as an expression, and then interpret the expression.

 - parsing part: the parsing part is constructed by the order of operation specifically defined in the program, and most of the order of operation is the same as that in a normal mathematical expression.

 - interpreting part: the interpreting part is not only about how to calculate the right result, but also how to make it fast and safe. Two key implementations are the continuation and the garbage collector.

## Documentation
The documentation: [MSDScript doc](https://zixuanzhao.gitbook.io/msdscript/)