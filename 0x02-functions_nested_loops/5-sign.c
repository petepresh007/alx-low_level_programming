#include "main.h"
/**
 * print_sign - function to print signs of a nuber
 * @n: checks for sign
 * Return: 1 if greater than 0 || return 0 if 0 || return -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
