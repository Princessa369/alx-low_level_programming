#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lower case
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char lc;

	while (count++ <= 9)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
