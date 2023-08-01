#include "lists.h"

/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
