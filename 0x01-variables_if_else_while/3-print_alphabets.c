#include <stdio.h>
/**
 * main - function to print lower followed by upper
 * Return: 0 (success)
 */
int main(void)
{
	char lo_up[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i <= 52; i++)
		putchar(lo_up[i]);
	putchar('\n');
	return (0);
}
