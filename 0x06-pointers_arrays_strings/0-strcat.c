#include "main.h"

/**
 * *_strncat - func
 * @dest: pointer
 * @src: pointer
 * Return: char
 */

char *_strncat(char *dest, char *src)
{
	int c1, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);


}
