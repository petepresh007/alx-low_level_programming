#include "main.h"
/**
 * _puts - prints a string
 * @str: value to be printed
 * Return: the value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
