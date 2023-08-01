#include "lists.h"

/**
 * add_nodeint_end - add node to the end of singly linked list
 * @head: a pointer to the head of the singly linked list
 * @n: the element to be added
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmph;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);

	tmph = *head;

	new_node->n = n;
	new_node->next = 0;

	if (tmph == 0)
	{
		*head = new_node;
	}
	else
	{
		while (tmph->next != 0)
			tmph = tmph->next;
		tmph->next = new_node;

	}
	return (new_node);
}
