#ifndef MaiN_H
#define MAIN_H
/*end of include guard*/

typedef struct formats
{
	char *ptr;
	int (*f)(va_list)
} function_t;

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int printc(va_list c);
int prints(va_list *s);
int print_per(va_list c);
/*end of prototype functions*/

#endif /*MAIN_H*/
