#include "main.h"

/**
 * get_endianness - parm
 * Return: int
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);

}
