#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, sum = 0, b1, b2, bp, vp;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		vp = a1;
	else
		vp = a2;
	if (size_r <= vp + 1)
		return (0);
	r[vp + 1] = '\0';
	a1--, a2--, size_r--;

	b1 = *(n1 + a1) - 48, b2 = *(n2 + a2) - 48;
	while (vp >= 0)
	{
	bp = b1 + b2 + sum;
	if (bp >= 10)
	sum = bp / 10;
	else
		bp = 0;
	if (bp > 0)
	*(r + vp) = (bp % 10) + 48;
	else
		*(r + vp) = '0';
	if (a1 > 0)
	a1--, b1 = *(n1 + a1) - 48;
	else
		b1 = 0;
	if (a2 > 0)
	a2--, b2 = *(n2 + a2) - 48;
	else
		b2 = 0;
	vp--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
