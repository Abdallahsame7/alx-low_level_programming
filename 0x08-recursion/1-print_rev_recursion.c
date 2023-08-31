#include "main.h"

/**
 * _print_rev_recursion - parm
 * @s: char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_puts_recursion(s + 1);
		_putchar(*s);
	}
}
