#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  allocates a grid of integers
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on faailure and if height of width is negative
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
		grid[h] == malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	return (grid);
}
