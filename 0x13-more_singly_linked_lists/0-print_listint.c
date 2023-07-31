#include "lists.h"
/**
 * print_listint - prints elements if a linked list
 * @h: the linked list to print, it's type is listint_t
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
