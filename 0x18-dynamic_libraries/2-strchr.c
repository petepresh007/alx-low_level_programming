#include "main.h"
/**
 * _strchr - locates a paticular string
 * @s: string to be entered
 * @c: character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}