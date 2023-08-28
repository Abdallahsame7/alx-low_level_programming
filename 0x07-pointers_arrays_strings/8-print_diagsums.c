#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - parm
 * @a: int
 * @size: int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, n1 = 0, n2 = 0;

	for (x = 0; x < size; x++)
	{
		n1 += a[x];
		n2 += a[size - x - 1];
		a += size;

	}
	printf("%d,", n1);
	printf("%d\n", n2);
}
