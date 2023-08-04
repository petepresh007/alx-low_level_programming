#include "main.h"
#include <stdio.h>
/**
 * main - a program to print all argument entered
 * @argc: number of argument
 * @argv: string of argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
