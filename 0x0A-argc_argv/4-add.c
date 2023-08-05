#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print the addition of two numbers
 * @argc: number of argument
 * @argv: string of argument
 * Return: 0 if (Success) and print 0 failure
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
