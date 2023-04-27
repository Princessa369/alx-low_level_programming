#include "main.h"

/**
 * print_line - draw a diagonal line
 * @n: number of times '_' char is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0, i < n; i++)
	{
		_putchar('_');
		_putchar('\n');
	}
}
