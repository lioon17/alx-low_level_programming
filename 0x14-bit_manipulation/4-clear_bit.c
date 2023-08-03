#include "main.h"

/**
 * clear_bit - Clears the bit at a given index in a number.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear (set to 0).
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
