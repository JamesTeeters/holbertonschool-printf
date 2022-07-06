#include "main.h"
/**
 * _printf - function that prints a variabl number of arguments.
 * of different data types to terminal.
 * @format: input string containg various arguments.
 *
 * Return: interger
 */
int _printf(const char *format, ...)
{
	int count = 0;
	unsigned int i;
	va_list args;
	int (*fun)(va_list args);

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			count++;
		}
		if (format[i + 1] == 'c' || format[i + 1] == 's')
		{
			fun = find_func(format[i + 1]);
			count += fun(args);
			i++;
		}
		if (format[i] != '\0')
			i++;
	}
	va_end(args);
	return (count);
}

