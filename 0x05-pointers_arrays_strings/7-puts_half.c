#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 */

void puts_half(char *str)
{
	int lnt = 0;

	while (*str != '\0')
	{
		lnt++;
		str++;
	}
	str -= (lnt / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
