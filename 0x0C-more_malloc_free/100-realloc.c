#include "main.h"

/**
 * *_realloc - parm
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *lol;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
	if (ptr == NULL)
	{
		lol = malloc(new_size);
		if (lol == NULL)
			return (NULL);
		return (lol);
	}
	if (new_size > old_size)
	{
		lol = malloc(new_size);
		if (lol == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)lol + i) = *((char *)ptr + i);
			free(ptr);

	}
	return (lol);
}
