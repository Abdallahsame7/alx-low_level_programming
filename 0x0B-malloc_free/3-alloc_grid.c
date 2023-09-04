#include "main.h"

/**
 * **alloc_grid - parm
 * @width: int
 * @height: char
 * Return: char
 */

int **alloc_grid(int width, int height)
{
	int **lol, i, j;

	lol = malloc(sizeof(*lol) * height);

	if (width <= 0 || height <= 0 || lol == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			lol[i] = malloc(sizeof(**lol) * width);
			if (lol[i] == 0)
			{
				while (i--)
					free(lol[i]);
				free(lol);
				return (0);
			}

			for (j = 0; j < width; j++)
				lol[i][j] = 0;
		}

	}
	return (lol);

}
