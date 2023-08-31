#include "main.h"

/**
 * clear_bit - sets the value of a bit to (0) at a given index.
 *
 * @n: number to add the value.
 * @index: the index to set to (0).
 *
 * Return: (1) if it worked, or (-1) if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((!n && *n != 0) || (!index && index != 0) || index > 63)
		return (-1);
	if (*n != 0)
        *n -= 1 << index;
	return (1);
}
