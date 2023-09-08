#include "main.h"

/**
 * *memset - parm
 * @s: char
 * @b: char
 * @n: int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *lol = s;

	while (n--)
		*s++ = b;

	return (lol);

}


/**
 * *_calloc - parm
 * @nmemb: int
 * @size: int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb)

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);

}
