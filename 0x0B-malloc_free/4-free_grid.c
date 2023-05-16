#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: 2D grid
 * @height: height of dimension of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
