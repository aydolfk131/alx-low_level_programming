#include "main.h"

/**
 * malloc_checked - A function to cause normal process termination with a status value of 98
 * @b: allocated memory in bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	ptr *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
