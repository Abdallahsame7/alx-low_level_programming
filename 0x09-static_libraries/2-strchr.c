#include "main.h"

/**
 * *_strchr - parm
 * @s: char
 * @c: char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
		{
			return (s + x);

		}


	}
	return ('\0');
}
