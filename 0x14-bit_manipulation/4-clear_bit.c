#include "main.h"
/**
 * clear_bit - function that sets the value of bit
 * @n: points to a bit
 * @index: index of bit
 * Return: 1 if it works or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
