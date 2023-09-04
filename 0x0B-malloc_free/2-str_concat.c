#include "main.h"

/**
 * _strlen - par
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);

}

/**
 * *str_concat - parm
 * @s2: int
 * @s1: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{

	int s11, s22, i;
	char *m;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";

	s1 = _strlen(s1);
	s2 = _strlen(s2);
	m = malloc((s11 + s22) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (i = 0; i <= s11 + s22; i++)
	{
		if (i < s11)
			m[i] = s1[i];

		else
			m[i] = s2[i - s11];
	}
	m[i] = '\0';
		return (m);


}
