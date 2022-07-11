# Welcome to _printf
A function that takes Arguments of various data types and prints them to the terminal before returning the total character count.
# Files
main .h - A file containing prototypes, and structure for _printf functions.
functions.c - A file containing functions that print each of the given data types.
find_format.c - A file that searches a structure for the correct data type and runs to related function.
_printf - A file that combines all other files into a singular function.
_putchar - A function that prints a singular character (see also putchar)
## Examples
Print a literal with a character in the middle followed by a new line.

    _printf("Str%cng\n",'!');
Output:
Str!ng

Print a string followed by a new line.

    _printf("%s\n", "I am a String!");
Output:
I am a String!

Print an Integer followed by a new line (Can use either %d or %i).

    _printf("%d\n", 42);
    _printf("%i\n", 42);

Output:
42
