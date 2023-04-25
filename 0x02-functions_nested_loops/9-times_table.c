#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
	{
		int result = a * b;

		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
		_putchar(' ');
		_putchar('\n');
	}
	}
}
