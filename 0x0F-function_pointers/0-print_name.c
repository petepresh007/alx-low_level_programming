#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints name
 * @name: name to be printed
 * @f:function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
