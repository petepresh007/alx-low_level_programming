#include <stdio.h>
/**
 * main - a program that prints alphabet in lower followed by upper
 * Return: 0 (success)
 */
int main(void)
{
	char lo_up[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 52; i++)
		putchar(lo_up[i]);
	putchar('\n');
	return (0);
}
