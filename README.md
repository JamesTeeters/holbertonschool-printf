# Welcome to _printf
a function that takes Arguments of various data types and prints them to the terminal before returning the total character count.
# Files
main .h - file containing prototypes, and structure for _printf functions.
functions.c - file containing functions that print each of the given data types.
find_format.c - file that searches a structure for the correct data type and runs to related function.
_printf - a file that combines all other files into a singular function.
_putchar - a function that prints a singular character (see also putchar)
## Examples
Print a literal with a character in the middle followed by a new line.

    _printf("Str%cng\n",'!');
Output:

Str!ng

Print a string followed by a new line.

    _printf("%s\n", "I am a String!");
Output:

I am a String!

Print an Integer followed by a new line.

    _printf("%d\n", 42);
    _printf("%i\n", 37);

Output:

42
37
