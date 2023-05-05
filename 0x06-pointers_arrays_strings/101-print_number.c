#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int k, l, m;

if (n < 0)
{
_putchar('-');
k = n * -1;
}
else
{
k = n;
}
l = k;
m = 1;
while (l > 9)
{
	l /= 10;
	m *= 10;
}
{
for (; m >= 1; m /= 10)
{
_putchar(((k / m) % 10 + '0');
}
}
}
