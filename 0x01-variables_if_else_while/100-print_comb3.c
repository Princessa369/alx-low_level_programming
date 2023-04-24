#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
