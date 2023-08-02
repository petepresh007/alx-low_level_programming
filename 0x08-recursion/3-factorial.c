#include "main.h"
/**
 * factorial - a program to print factorial
 * @n: number to be inputted
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
