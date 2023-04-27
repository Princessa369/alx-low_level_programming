#include <stdio>

/**
 * main - prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;

	long largest_prime_factor = 2;

	while (n > 1)
	{
	if (n % largest_prime_factor == 0)
	{
	n /= largest_prime_factor;
	}
	else
	{
	largest_prime_factor++;
	}
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
