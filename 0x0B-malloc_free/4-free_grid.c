#include "main.h"

/**
 * free_grid - parm
 * @grid: int
 * @height: char
 * Return: char
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
