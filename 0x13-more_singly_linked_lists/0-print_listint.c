#include "lists.h"
#include <stdio.h>

/**
 * print_listint_t - print elements of a singly linked list
 * @h: pointer to a list
 * Return: integer
 */

size_t print_listint_t(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int i = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i)
}
