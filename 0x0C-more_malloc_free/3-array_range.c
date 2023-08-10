#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates array of integers
 * @min: values
 * @max: values
 * Return: pointer to a newly created array or null
 */

int *array_range(int min, int max)
{
	int n, i;
	int *A;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	A = malloc(sizeof(int) * n);

	if (A == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		A[i] = min++;
	return (A);

}
