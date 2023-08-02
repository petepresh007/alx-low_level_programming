#include "main.h"
/**
 * _pow_recursion - a program to raise a number to the power of another
 * @x: the base
 * @y: the power
 * Return: the pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
