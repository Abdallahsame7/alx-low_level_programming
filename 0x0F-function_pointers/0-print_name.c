#include "function_pointers.h"

/**
 * print_name - parm
 * @name: char
 * @f: void
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);


}
