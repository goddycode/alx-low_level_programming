#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int i = 0;

	ptr = h;
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
