#include <stdio.h>
/**
 * main - main function
 * Return: 0 after all the processes
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("the size of a character is: %lu.\n", (unsigned long)sizeof(c));
	printf("the size of an integer is: %lu.\n", (unsigned long)sizeof(i));
	printf("the size of a long integer is: %lu.\n", (unsigned long)sizeof(li));
	printf("the size of a long long integer is: %lu.\n", (unsigned long)sizeof(lli));
	printf("the size of a float is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
