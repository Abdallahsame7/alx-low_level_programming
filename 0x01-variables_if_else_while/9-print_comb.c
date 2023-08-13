#include <stdio.h>

/**
 * main - Entry point
 * Description: print
 * Return: Always 0 (Success)
 */

int main(main)
{
	int x = 0;

	while (x <= 9)
	{
		putcher (x+48);
		if(x != 9)
		{
		putchar(',');
		putchar(' ');
		}
		x++;
	}	
	putcher('\n');
	return (0);
}
