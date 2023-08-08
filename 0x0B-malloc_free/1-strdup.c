#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a string
 * @str: the string to inputted
 * Return: NUll if the string is NUll or returns the pointer to a string
 */

char *_strdup(char *str)
{
	char *A;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	A = (char *)malloc((i + 1) * sizeof(char));

	if (A == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		A[r] = str[r];
	return (A);

}
