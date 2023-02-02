#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum all of the data (n) in a list
 * @head: the first node address
 * Return: integer
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
