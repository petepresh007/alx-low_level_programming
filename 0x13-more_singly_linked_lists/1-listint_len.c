#include "lists.h"
/**
 * listint_len - a function that prints the len
 * @h: content of node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *another_node = h;
	size_t num_element = 0;

	while (another_node != NULL)
	{
		num_element += 1;
		another_node = another_node->next;
	}
	return (num_element);
}
