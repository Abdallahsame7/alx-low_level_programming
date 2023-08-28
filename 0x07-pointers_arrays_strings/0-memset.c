#include "main.h"

/**
 * *_memset - parm
 * @s:char
 * @b: char
 * @n: int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
