#include <stdio.h>
/**
 * main - hexadecimal numbers
 * Return: 0 (success)
 */
int main(void)
{
	char si[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(si[i]);
	putchar('\n');
	return (0);
}
