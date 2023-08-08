#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_array - a pointer to create an array
 * @size: size of th array
 * @c: array
 * Return: a pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = (char *)malloc(size * sizeof(char));

	if (size == 0 || A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
