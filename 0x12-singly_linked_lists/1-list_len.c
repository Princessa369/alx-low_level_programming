#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t nel = 0;

	while (h)
	{
		nel++;
		h = h->next;
	}
	return (nel);
}
