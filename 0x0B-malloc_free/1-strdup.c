#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string of characters
 * Return: 0
 */

char *_strdup(char *str)
{
	char *new;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
	new[j] = str[j];
	return (new);
	}
