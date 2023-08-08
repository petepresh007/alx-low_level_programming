#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a program to concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: Null on failure or content of s1 and s2 on success
 */

char *str_concat(char *s1, char *s2)
{
	char *A;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	A = (char *)malloc(sizeof(char) * (i + j + 1));

	if (A == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		A[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		A[i] = s2[j];
		i++, j++;
	}
	A[i] = '\0';
	return (A);
}
