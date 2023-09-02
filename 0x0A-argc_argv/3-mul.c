#include <stdio.h>
#include <stdlib.h>

/**
 * main- parm
 * @argv: pointer
 * @argc: pointer
 * Return: int;
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
