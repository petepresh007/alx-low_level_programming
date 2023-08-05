#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to multiply two numbers
 * @argc: numbers of argument
 * @argv: string of argument
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a * b;

		printf("%d\n", mul);
		return (0);
	}
}
