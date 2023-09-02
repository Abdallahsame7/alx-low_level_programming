#include <stdio.h>

/**
 * main - parm
 * @argc: int
 * @argv: char
 * Return: int
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
