#include "lists.h"
#include <stdlib.h>

/**
 * free_lisint - Frees a list listint_t
 * @head: First node's address
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr2;

	ptr = head;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
}
