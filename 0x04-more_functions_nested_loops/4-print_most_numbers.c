#include "main.h"
/**
 * print_most_numbers - pogram that print numbers
 * Return: print numbers
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
