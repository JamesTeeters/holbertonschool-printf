#include "main.h"
/**
 * printc - print a character
 * @c: input character
 *
 * Return: count
 */
int printc(char c)
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
int prints(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;

	}
	return(i);
}
