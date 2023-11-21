#include "lists.h"

/**
 * add_nodeint_end - a func that adds a node at end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert
 * Return: new node ptr, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tem = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = nw;

	return (nw);
}

