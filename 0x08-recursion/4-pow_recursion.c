#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be raised
 * @y: the power to raise to
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	answer *= _pow_recursion(x, y - 1);
	return (answer);
}
