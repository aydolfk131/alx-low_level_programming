#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints the list
 * @h: a pointer to the list
 * Description: if the string is NULL print [0] (nil)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
