#include "main.h"
/**
 * printc - print a character
 * @args: input arguments.
 *
 * Return: count
 */
int printc(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * prints - print a string.
 * @args: input arguments.
 *
 * Return: count
 */
int prints(va_list args)
{
	int i = 0;
	char *c;

	while (args)
	{
		c = va_arg(args, char*);
		_putchar(c[i]);
		i++;

	}
	return (i);
}
