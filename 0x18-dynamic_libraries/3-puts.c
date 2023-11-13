#include "main.h"
/**
 * _puts - prints a string
 * @str: value to be printed
 * Return: the value
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
