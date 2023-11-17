#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A func add a new node at the end
 * @head: double pointer to the list_t list
 * @str: string to add
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tem = *head;
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
	while (tem->next != NULL)
		tem = tem->next;

	tem->next = nw;
	return (nw);
}
