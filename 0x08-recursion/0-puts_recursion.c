#include "main.h"

/**
 * _puts_recursion - a function to print string followed by a new line
 * @s: the inputted string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
