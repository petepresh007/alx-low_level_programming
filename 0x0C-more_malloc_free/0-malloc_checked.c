#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b:memory size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *A = malloc(b);

	if (A == NULL)
		exit(98);
	return (A);
}
