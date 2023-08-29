#include "lists.h"
/**
 * free_listint2 - a unction that frees a listint_t list.
 * @head: first list in node
 * Retun: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node_ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		node_ptr = *head;
		*head = (*head)->next;
		free(node_ptr);
	}
	head = NULL;
}
