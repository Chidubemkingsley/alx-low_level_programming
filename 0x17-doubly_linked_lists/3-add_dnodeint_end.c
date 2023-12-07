#include "lists.h"

/**
 * add_dnodeint_end - this adds a new node at the end
 * of a dlistint_t list in the node
 *
 * @head: head of the particular list
 * @n: value of the element of the particular list
 * Return: the address of the new element of the paryicular list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
