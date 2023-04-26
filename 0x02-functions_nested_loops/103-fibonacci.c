#include <stdio.h>

/**
 * main - finds and prints sum of even valued terms
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		int c = a + b;

		a = b;
		b = c;
	}
puts("The sum of even-valued terms up to 4,000,000 is:");
return (0);
}
