#include "main.h"

/**
 * rot13 - string
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i;

	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot1[i])
			{
				*s = rot2[i];
				break;
			}


		}
		s++;

	}
	return (ptr);

}
