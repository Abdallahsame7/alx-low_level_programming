#include "lists.h"

/**
 * sum_listint - parm
 * @head: pointer
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
