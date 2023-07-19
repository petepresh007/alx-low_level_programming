#include "main.h"

/**
 * print_alphabet_x10 - function to print ten times the alphabet
 * Return: (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
