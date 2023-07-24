#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: the value to be inputted
 * Return: rev
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
