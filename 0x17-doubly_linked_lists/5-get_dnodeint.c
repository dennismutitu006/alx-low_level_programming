#include "lists.h"
/**
 * get_dnodeint_at_index - this function will return the nth node of a list.
 * @head: this is a pointer to the list.
 * @index: the index of the node to search for , starttin frm 0.
 * Return: nth node or null if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}

