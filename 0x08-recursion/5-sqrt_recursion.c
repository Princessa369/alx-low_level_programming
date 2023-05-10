#include "main.h"

int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returms the natural square root of a number
 * @n: number
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, i));
}

/**
 * actual_sqrt_recursion - returns to find the natural square root of a number
 * @n: number to take square root of
 * @i: iterator
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (i == n / 2)
		return (-1);
	return (actual_sqrt_recursion(n, i + 1));
}
