#include "main.h"
#include <stdio.h>
/**
 * main - program to print numbers of argument
 * @argc: number of argument
 * @argv: array of strings
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
