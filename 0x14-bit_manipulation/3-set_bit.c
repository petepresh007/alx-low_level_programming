#include "main.h"
/**
 * set_bit - function to set the value of a bit
 * @n: pointer to a binary
 * @index: index of bits
 * Return: 1 (success), - 1 (failure)
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
