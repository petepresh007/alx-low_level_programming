#include "main.h"
/**
 * flip_bits - function that returns the No of bits
 * @n: bits
 * @m: bots to fip
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		y = z >> i;
		if (y & 1)
			x++;
	}
	return (x);
}
