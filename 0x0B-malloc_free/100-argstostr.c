#include "main.h"


/**
 * _strlen - parm
 * @s: char
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
 * *argstostr - parm
 * @ac: int
 * @av: char
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	
}
