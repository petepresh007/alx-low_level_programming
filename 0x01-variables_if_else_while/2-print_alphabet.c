#include <stdio.h>
/**
 * main - function to print a-z
 * Return: 0 (success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
