#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, c;

	printf("1, 2, ");

	for (int i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
	if (i < 98)
	{
		printf("%d, ", c);
	}
	else
	{
		printf("%d\n", c);
	}
	}
	return (0);
}
