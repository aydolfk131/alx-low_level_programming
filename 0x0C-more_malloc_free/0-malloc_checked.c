#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: bytes to allocate
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

