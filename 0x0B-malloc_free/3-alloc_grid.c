#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return: Pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int  i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	dim = malloc(sizeof(int *) * height);
	if (dim == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dim[i] = malloc(sizeof(int) * width);
		if (dim[i] == NULL)
	{
		for (; i >= 0; i--)
			free(dim[i]);
		free(dim);
		return (NULL);
	}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dim[i][j] = 0;
	}
	return (dim);
}
