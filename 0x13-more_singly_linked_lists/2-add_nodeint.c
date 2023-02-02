#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at the beginning of the list
 *@head: Address of the first node
 *@n: data to insert in the new node
 *Return: New node's address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
