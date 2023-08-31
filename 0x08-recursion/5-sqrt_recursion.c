#include "main.h"

/**
 *  _sqrt_recursion - parm
 * @value: int
 * @n: int
 * Return: void
 */

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - parm
 * @n: int
 * @value: int
 * Return: int
 */

int square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (square(n, value + 1));
	else
		return (-1);

}
