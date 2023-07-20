#include "main.h"
/**
 * _isupper - a program that checks for uppercase character
 * @c: input from the users
 * Return: 0 if otherwise || 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
