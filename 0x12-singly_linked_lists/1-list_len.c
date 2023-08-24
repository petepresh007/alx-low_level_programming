#include "lists.h"
/**
 * list_len - function to print the length of a list
 * @h: singly linked list
 * Return: node count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
