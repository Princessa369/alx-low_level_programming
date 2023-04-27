#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to be printed
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);

			if (j != n)
		{
			printf("\t");
		}
		}
		printf("\n");
	}
}
