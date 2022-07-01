#include "main.h"
/**
 * printc - print a character
 * @c: input character
 *
 * Return: count
 */
int printc(va_list c)
{
	_putchar(c);
	return (1);
}

/**
 * prints - print a string.
 * @s: input string.
 *
 * Return: count
 */
int prints(va_list *s)
{
	int x = 0;

	while (s[x])
		x++;
	_puts(s);
	return(x);
}

/**
 * print_per - prints a percent sign.
 * @c: input character.
 *
 * Return: count
 */
int print_per(va_list c)
{
	_putchar('%');
	return(1);
}
