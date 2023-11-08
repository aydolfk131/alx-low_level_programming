#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a func that prints each array element on a new
 * @array: the array
 * @size: elements to print
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
