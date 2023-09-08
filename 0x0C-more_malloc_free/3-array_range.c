#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A fction that creates an array of integers
 * @min: minimum  values
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
