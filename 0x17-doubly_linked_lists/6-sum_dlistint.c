#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
