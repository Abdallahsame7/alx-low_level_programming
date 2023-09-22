#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - linked
 * @str: string
 * @len: lenght
 * @next: pointer
 * Description: single linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;

} list_t;

int _putchar(char c);
int _strlen(cahr *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__ ((constructor));
