#include "main.h"

/**
 * _memcpy - a program to copy memory
 * @dest: destination
 * @src: copid
 * @n: the byte to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
