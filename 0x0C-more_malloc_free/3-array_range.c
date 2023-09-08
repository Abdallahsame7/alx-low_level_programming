#include "main.h"

/**
 * array_range - parm
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int l1, i;
	int *lol;

	if (min > max)
		return (NULL);

	l1 = max - min + 1;
	lol = malloc(sizeof(int) * l1);
	if (!lol)
		return (NULL);

	for (i = 0; i < l1; i++)
		lol[i] = min++;
	return (lol);
}
