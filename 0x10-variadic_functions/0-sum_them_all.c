#include "variadic_functions.h"

/**
 * sum_them_all - function to sum numbers entered
 * @n: count
 * Return: sum or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(pa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);
	return (sum);
}
