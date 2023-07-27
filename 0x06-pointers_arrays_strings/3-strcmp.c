#include "main.h"
/**
 * _strcmp - a program that compares strings
 * @s1: input
 * @s2: input
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (15);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
