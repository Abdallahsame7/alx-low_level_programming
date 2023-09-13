#include "function_pointers.h"

/**
 * array_iterator - parm
 * @array: int
 * @size: size
 * @action: void
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		while (array <= x)
			action(*array++);
}
