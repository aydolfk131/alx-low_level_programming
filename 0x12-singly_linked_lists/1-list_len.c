#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * @h: pointer
 * Return: number of elements in the pointer
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
