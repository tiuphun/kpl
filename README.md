# [IT3323E] Compiler Construction

## Notes
If some definitions are defined in a different source file, ensure that file is also being compiled. 
`gcc scanner.c charcode.c error.c reader.c token.c -o scanner`