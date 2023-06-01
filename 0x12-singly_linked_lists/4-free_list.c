#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *meet;

	while (head)
	{
		meet = head->next;
		free(head->str);
		free(head);
		head = meet;
	}
}
