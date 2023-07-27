#include "main.h"
/**
 * leet - replaces some strings
 * @str: string value
 * Return: value
 */

char *leet(char *str)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
			}
		}
	}
	return (str);
}
