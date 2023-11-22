#include "lists.h"

/**
 * find_listint_loop - A Fuc finds the loop in a linked list
 * @head: linked list to search
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slw && fast && fast->next)
	{
		fast = fast->next->next;
		slw = slw->next;
		if (fast == slw)
		{
			slw = head;
			while (slw != fast)
			{
				slw = slw->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
