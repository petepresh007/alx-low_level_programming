#include "lists.h"
/**
 * add_node - function that adds a node
 * @head: head of the list
 * @str:dup
 * Return: address of element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *another_node;
	size_t j;

	another_node = malloc(sizeof(list_t));
	if (another_node == NULL)
		return (NULL);
	another_node->str = strdup(str);

	for (j = 0; str[j]; j++)
		;
	another_node->len = j;
	another_node->next = *head;
	*head = another_node;

	return (*head);
}
