#include "main.h"

/**
 * clear_bit - a func that sets the value of a given bit to 0
 * @n:  number pointer
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
