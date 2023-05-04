#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of tbe array
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < n; g++)
	{
		n--;
	h = a[g];
	a[g] = a[n];
	a[n] = h;
	}
}
