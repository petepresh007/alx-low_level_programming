#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the list
 * @str: string
 * * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *another_node, *current_node;
	size_t n;

	another_node = malloc(sizeof(list_t));
	if (another_node == NULL)
		return (NULL);

	another_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	another_node->len = n;
	another_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = another_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = another_node;
	}
	return (*head);
}
