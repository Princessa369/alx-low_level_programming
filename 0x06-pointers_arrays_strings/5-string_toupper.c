#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
	if (n[k] >= 'a' && n[k] <= 'z')
		n[k] = n[k] - 32;
	k++;
	}
	return (0);
}
