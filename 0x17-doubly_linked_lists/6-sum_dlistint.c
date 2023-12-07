#include "lists.h"

/**
 * sum_dlistint - that returns the sum of all the data (n)
 * of a doubly linked list in the sequence
 *
 * @head: head of the list of the particular sequence
 * Return: sum of the data of a particular sequence
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
