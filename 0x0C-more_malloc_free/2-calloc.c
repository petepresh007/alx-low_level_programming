#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;

	if (nmemb == 0 || size == 0)
		return (NULL);
	A = malloc(size * nmemb);
	if (A == NULL)
		return (NULL);
	_memset(A, 0, nmemb * size);
	return (A);
}
