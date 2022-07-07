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
	int n = va_arg(args, int);
	int tmp = n;
	int count = 1;

	if (n < 0)
	{
		n = -n;
		tmp = n;
		_putchar('-');
		count++;
	}
	while (n / 10)
	{
		n = n / 10;
		count++;
	}
	print_rec(tmp);
	return (count);
}

/**
 * print_rec - run recurrsion to print number
 * @n: input number
 *
 * Return: count
 */
void print_rec(int n)
{
	if (n / 10)
		print_rec(n /10);
	_putchar(n % 10 + '0');
}
