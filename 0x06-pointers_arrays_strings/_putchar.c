#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - function
 * @c: char
 * Return: int
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
