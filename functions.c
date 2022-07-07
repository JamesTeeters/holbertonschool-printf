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

	c = va_arg(args, char*);
	while (c[i])
	{
		_putchar(c[i]);
		i++;

	}
	return (i);
}

/**
 * printn - print an interger.
 * @args: input argument.
 *
 * Return: count.
 */
int printn(va_list args)
{
	int n;

	n = va_arg(args, int);
	print_rec(n);
	return (n);
}

/**
 * print_rec - run recurrsion to print number
 * @n: input number
 *
 * Return: count
 */
int print_rec(int n)
{
	int count = 0;

	if (n / 10 != 0)
		count = print_rec(n / 10);
	_putchar(n % 10 + '0');
	return (count += 1);
}
