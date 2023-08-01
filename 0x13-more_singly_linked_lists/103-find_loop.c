#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (!head)
		return (NULL);

	hare = tortoise = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;

		if (hare == tortoise)
		{
			tortoise = head;

			while (tortoise && hare)
			{
				if (tortoise == hare)
					return (tortoise);

				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
	}

	return (NULL);
}
