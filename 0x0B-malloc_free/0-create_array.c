#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to assign
 * Return: Pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		str[t] = c;
	return (str);
}
