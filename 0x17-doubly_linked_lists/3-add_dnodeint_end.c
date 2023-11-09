#include "lists.h"
/**
 * add_dnodeint_end -adss a new node at tyhe end of the list.
 * @head: the head of the list.
 * @n: the value to be added aat the end of the list.
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nw;
	}
	else
	{
		*head = nw;
	}

	nw->prev = h;
	return (nw);
}

