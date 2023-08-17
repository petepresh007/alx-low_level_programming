#include "variadic_functions.h"
/**
 * print_numbers - a function to print numbers
 * @separator: separator
 * @n: count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(pa);
	printf("\n");
}
