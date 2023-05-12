#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: 1 if true, 0 if false, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}