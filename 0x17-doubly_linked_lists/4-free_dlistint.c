#include "lists.h"

/**
 * free_dlistint - this frees a dlistint_t list.
 * @head: this is the pointer to head of the list
 * Return: naugt
 **/
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
