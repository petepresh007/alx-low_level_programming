#include "main.h"
/**
 * _isalpha - A function to check for lower and uppercase alphabet
 * @c: checks for the case
 * Return: 1 (Success) || 0 (Failure)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
