#include "lists.h"

/**
 * free_listint - a func that frees a linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

