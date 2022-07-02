#ifndef MAIN_H
#define MAIN_H
/*end of include guard*/

#include <stdarg.h>
#include <stddef.h>
/*end of includes*/

/*structure for format types*/
typedef struct func
{
	char *ptr;
	int (*f)(va_list args);
} func_t;
/*end of struct*/

int (*find_func(char *ptr))(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int printc(va_list args);
int prints(va_list args);
/*end of prototypes*/

#endif /*MAIN_H*/
