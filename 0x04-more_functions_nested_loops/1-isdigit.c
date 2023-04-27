#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 and 9
 * @c: parameter to check
 * Return: 1 if it is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
