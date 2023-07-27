#include "main.h"
/**
 * rot13 - cipher using rot
 * @str: value to cypher
 * Return: cyphered value
 */
char *rot13(char *str)
{
	int i;
	int j;
	char value[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotvalue[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == value[j])
			{
				str[i] = rotvalue[j];
				break;
			}
		}
	}
	return (str);
}
