#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charchter to print
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
