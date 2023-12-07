#include "lists.h"

/**
 * dlistint_len - has the ability to return number
 * a double linked list of the nodes
 *
 * @h: head of the particular list
 * Return: the number of nodes in the integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

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
