#include "main.h"
/**
 * set_bit - function that sets the value of a bit
 * @n: pointer to binary int
 * @index: index of bits
 * Return: Returns: 1 if it worked, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;
	return (1);
}
