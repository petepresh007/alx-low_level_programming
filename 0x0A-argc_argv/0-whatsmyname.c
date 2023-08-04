#include "main.h"
#include "stdio.h"
/**
 * main - a program that prints name
 * @argc: number of argument inputted
 * @argv: array of strings
 * Return: 0 (Success)
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
