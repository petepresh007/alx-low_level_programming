#include "main.h"

/**
 * _memset - a program that fills memory with a constant byte
 * @s: stores the value to be returned
 * @n: numbers of bytes
 * @b:points to
 * Return: the valu of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
