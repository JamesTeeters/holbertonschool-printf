#include "main.h"
/**
 * find_func - finds correct format function from structure.
 * @c: input char.
 *
 * Return: int
 */
int (*find_func(char c))(va_list args)
{
	int i;

	func_t func[] = {
		{'c', printc},
		{'s', prints}
	};

	i = 0;
	while (func[i].specifier)
	{
		if (func[i].specifier == c)
			return (func[i].f);
		i++;
	}
	return (NULL);
}
