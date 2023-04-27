#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times '_' char is printed
 *Return: \n if n is 0 or less
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
