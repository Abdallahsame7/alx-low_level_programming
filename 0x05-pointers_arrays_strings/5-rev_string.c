#include "main.h"

/**
 * rev_string - rev
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char car;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; j++)
	{
		car = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = car;
	}
}
