#include "main.h"
/**
 * swap_int - function that swaps numbers
 * @a: value to be swapped
 * @b: value to swapped
 * Return: values
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
