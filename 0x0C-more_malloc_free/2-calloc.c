#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * void *_calloc - a function that allocates memory to an array
 * @nmemb: the integer
 * @size: the size of memory
 * Return: the pointer to the allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
