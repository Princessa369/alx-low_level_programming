#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number to print
*/

void print_binary(unsigned long int n)
{
	int p, val = 0;
	unsigned long int numb;

	for (p = 63; p >= 0; p--)
	{
		numb = n >> p;

		if (numb & 1)
		{
			_putchar('1');
			val++;
		}
		else if (val)
		_putchar('0');
	}
	if (!val)
	_putchar('0');
}
