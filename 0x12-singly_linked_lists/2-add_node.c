#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  a function for adding a new node at the beginning
 * @head: pointer to the list_t list
 * @str: string
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);

	while (new->next != NULL)
		new->next = new;
	return (new);
}
