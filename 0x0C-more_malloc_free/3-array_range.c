#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of stored values
 * @max: maximum range of stored values
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *mkr;
	int k, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	mkr = malloc(sizeof(int) * size);

	if (mkr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		mkr[k] = min++;
	return (mkr);
}
