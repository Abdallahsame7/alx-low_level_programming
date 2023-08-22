#include "main.h"

/**
 * print_line - print
 *@n: int
 *Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('-');
		_putchar('\n');

	}
}
