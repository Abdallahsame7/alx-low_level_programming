#include "main.h"

/**
 * *_strncat - func
 * @dest: pointer
 * @src: pointer
 * Return: char
 * @n: number
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1, i;

	c1 = 0;
	while (dest[c1])
		c1++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c1 + i] = src[i];
	dest[c1 + i] = '\0';
	return (dest);



}
