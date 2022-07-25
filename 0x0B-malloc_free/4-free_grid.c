#include "main.h"
#include <stdlib.h>
/**
 * free_grid - removing memory alocation
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

