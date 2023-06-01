#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: double pointer to the list
 * @str: string to add
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
		if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
	{
	*head = nw;
	return (nw);
	}

	while (tmp->next)
	tmp = tmp->next;
	tmp->next = nw;

	return (nw);
	}
