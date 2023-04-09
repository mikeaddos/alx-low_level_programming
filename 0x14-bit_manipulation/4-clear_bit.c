#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int to be modified
 * @index: index of the bit to be cleared
 *
 * Return: 1 if it worked, or  -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;

	return (1);
}
