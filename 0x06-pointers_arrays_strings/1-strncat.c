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

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);



}
