#include "list.h"
#include <stdlib.h>

/**
 *add_nodeint_end - Add a new node at the end of a list
 * @head: First node's address
 *@n: Integer to insert in the new node
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr2;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr2 = *head;
	while (ptr2->next)
		ptr2 = ptr2->next;
	ptr2->next = ptr2;
	return (ptr);
}
