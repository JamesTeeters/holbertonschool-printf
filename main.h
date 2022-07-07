#ifndef MAIN_H
#define MAIN_H
/*end of include guard*/

#include <stdarg.h>
#include <stddef.h>
/*end of includes*/

/**
 * struct func - format specifier
 * @specifier: character iditifier
 * @f: format function
 */
typedef struct func
{
	char specifier;
	int (*f)(va_list args);
} func_t;
/*end of struct*/

int (*find_func(char c))(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int printc(va_list args);
int prints(va_list args);
int printn(va_list args);
void print_rec(int n);
/*end of prototypes*/

#endif /*MAIN_H*/
