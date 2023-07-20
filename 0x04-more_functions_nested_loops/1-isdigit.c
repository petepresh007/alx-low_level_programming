#include "main.h"
/**
 * _isdigit - program that checks if numbers are digit
 * @c: input from the users
 * Return: 1 if true and zero if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
