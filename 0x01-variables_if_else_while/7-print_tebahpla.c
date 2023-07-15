#include <stdio.h>
/**
 * main - reverse alphabet function
 * Return: 0 (success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
