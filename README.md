# [IT3323E] Compiler Construction
> FYI: Nguyen Tieu Phuong - 20210692

KPL stands for "Kyoto Programming Language". This is a simple programming language that is used to demonstrate the concepts of compiler construction.

## Instructions
If some definitions are defined in a different source file, ensure that those files is also being compiled. 

To compile, run the following commands under the respective folder:
* Scanner: `gcc scanner.c charcode.c error.c reader.c token.c -o scanner`

* Parser: `gcc -o main main.c parser.c charcode.c error.c reader.c scanner.c token.c`

* Scope: `gcc -o main main.c parser.c charcode.c error.c reader.c scanner.c token.c semantics.c symtab.c debug.c`

* Type Checking: `gcc -o main main.c parser.c charcode.c error.c reader.c scanner.c token.c semantics.c symtab.c debug.c`