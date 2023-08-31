#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: points to a bit
 * @index: index of a bit
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
