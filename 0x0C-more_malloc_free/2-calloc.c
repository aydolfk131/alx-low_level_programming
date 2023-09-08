#include <stdlib.h>
#include "main.h"

/**
 * *_memset - A function that fills the memory with a constant byte
 * @s: memory area
 * @b: the character to copy
 * @n: number of bytes
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - A functoin that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element in the array
 * Return: pointer to the  mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(size * nmemb));

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

