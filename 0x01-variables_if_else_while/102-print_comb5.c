#include <stdio.h>

/**
 * main - prints all possible combinations of two two digit numbers
 * Return: Always 0
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
	for (d = c + 1; d <= 99; d++)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		putchar(' ');
		putchar(d / 10 + '0');
		putchar(d % 10 + '0');
	if (c != 99 || d != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
