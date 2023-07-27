#include "main.h"
/**
 * reverse_array - reverses the value of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, t;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = t;
	}
}
