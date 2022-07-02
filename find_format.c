#include "main.h"
/**
 * find_func - finds correct format function from structure.
 * @p: input char.
 *
 * Return: int
 */
int (*find_func(char *p))(va_list args)
{
	int i;

	func_t func[] = {
		{"c", printc},
		{"s", prints}
	};

	i = 0;
	while (func[i].ptr)
	{
		if (func[i].ptr == p)
			return (func[i].f);
		i++;
	}
	return (NULL);
}
