#include "main.h"
/**
 * _printf - function that prints a variabl number of arguments 
 * of different data types to terminal.
 * @format: input string containg various arguments.
 *
 * Return: interger
 */
int _printf(const char *format, ...)
{
	unsigned int i;

	va_list args;
	va_start(args, format);

	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
			_putchar(format[i]);
	}	
	i++;
	if (format[i] == '%')
		_putchar('%');
	return (0);
}

