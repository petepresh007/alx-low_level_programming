#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big end, 1 if little end
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
