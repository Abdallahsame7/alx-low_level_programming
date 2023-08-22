#include "main.h"

/**
 * swap_int - swapping
 * @a: input parameter -1
 * @b: input parameter 2
 *Return: Nothing
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
