#include "main.h"

/**
 * *_strdup - parm
 * @str: char
 * Return: char
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == 0)
		return (0);

	for (; str[size] != '\0'; size++)
	;
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];

	}
	return (m);
}
