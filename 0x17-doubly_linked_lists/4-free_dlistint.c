#include "lists.h"
/**
 * free_dlistint - this function frees a list.
 * @head: the pointer to the head of the list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
