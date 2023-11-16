#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A that returns number of elements
 * @h: pointer to the list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (n);
}
