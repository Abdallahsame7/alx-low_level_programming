#include <stdio.h>

/**
 * main - Entry point
 * Description: all char
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch1 <= 'z')
	{
	putcher(ch1);
	ch1++;
	}
	while (ch2 <= 'z')
	{
	putcher(ch2);
	ch2++;
	}
	putcher('\n');
	return (0);
}
