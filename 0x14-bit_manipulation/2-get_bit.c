#include "main.h"

/**
 * get_bit - This function retrieves the value of a specific bit at a given index within a decimal number
 * @n: number to search
 * @index:the  index of bit
 * Return:the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
