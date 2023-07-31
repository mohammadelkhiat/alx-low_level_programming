#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @n: the number to add as the new node
 * @head: pointer to the head of singly linked lis
 *
 * Return: the address of the new element, NULL if faild.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
