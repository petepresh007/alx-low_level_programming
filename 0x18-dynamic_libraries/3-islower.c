#include "main.h"
/**
 * _islower - function to check whether an alphabet is lower case
 * @c: The character in ascii code
 * Return: 1 (Success) || 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
