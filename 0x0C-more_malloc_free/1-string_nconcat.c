#include "main.h"

/**
 * *string_nconcat - parm
 * @s1: char
 * @s2: char
 * @n: int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *lol;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	lol = malloc(l1 + n + 1);
	if (lol == NULL)
	{
		return (NULL);

	}
	for (i = 0; s1[i] != '\0'; i++)
		lol[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		lol[i] = s2[j];
		i++;
	}
	lol[i] = '\0';
	return (lol);
}

