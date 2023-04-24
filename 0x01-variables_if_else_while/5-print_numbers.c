#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar(p + '0');
	}
	putchar('\n');
	return (0);
}
