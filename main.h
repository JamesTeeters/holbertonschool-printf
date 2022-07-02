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
	int (*f)(va_list);
} func_t;
/*end of struct*/

int _printf(const char *format, ...);
int _putchar(char c);
int printc(char c);
int prints(char *);
/*end of prototypes*/

#endif /*MAIN_H*/
