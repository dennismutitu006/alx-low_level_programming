#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in a list.
 * @h: the head of the doublty list
 * Return: the numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
