#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	long int n;

	n = 612852475143;
	long int d = 2, a = 0, max;

	while (n != 0)
	{
	if (n % d != 0)
	d = d + 1;
	else
	{
	max = n;
	n = n / d;
	if (n == 1)
	{
	printf("%d is the largest prime factor !", max);
	a = 1;
	break;
	}
	}
	}
	return (0);
}


