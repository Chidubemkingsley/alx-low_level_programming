#include "lists.h"

/**
 * get_dnodeint_at_index - this returns the nth of the node.
 * @head: pointer to head of the linked list
 * @index: index of the node to search for, starting from 0 of the linked list
 * Return: nth node or naught
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
