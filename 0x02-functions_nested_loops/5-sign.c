#include "main.h"

/**
 * print_sign - function bulitin
 *
 * @n: checks input
 *
 * Return: Always 0.
 *
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48); /*IS ZERO*/
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
