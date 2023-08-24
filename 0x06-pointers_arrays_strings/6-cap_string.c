#include "main.h"
#include <stdio.h>

/**
 * isLower - lower
 * @c: cha`r
 * Return: int
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);

}

/**
 * isDelimeter - del
 * @c: char
 * Return: int
 */

int isDelimeter(char c)
{
	int i;
	char del[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (i);
	return (0);
}


/**
 * cap_string - string
 * @s: string
 * Return: cahr
 */


char *cap_string(char *s)
{
	char *ptr = s;
	int found = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			found = 1;
		else if (isLower(*s) && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;

	}
	return (ptr);

}
