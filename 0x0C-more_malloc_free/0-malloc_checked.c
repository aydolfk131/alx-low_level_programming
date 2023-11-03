#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function to allocates memory
 * @b: allocated memory in bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	else
		return (i);
}
