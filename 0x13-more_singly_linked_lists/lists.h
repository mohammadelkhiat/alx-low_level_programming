#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


/* the given prototype before the tasks */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*the prototypes of tasks*/

size_t print_listint(const listint_t *h); /*0. Print list*/
size_t listint_len(const listint_t *h); /*1. List length*/
listint_t *add_nodeint(listint_t **head, const int n); /*2. Add node*/
listint_t *add_nodeint_end(listint_t **head, const int n); /*3. Add node at the end*/
void free_listint(listint_t *head); /*4. Free list*/
void free_listint2(listint_t **head); /*5. Free*/
int pop_listint(listint_t **head); /*6. Pop*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); /*7. Get node at index*/
int sum_listint(listint_t *head); /*8. Sum list*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); /*9. Insert*/
int delete_nodeint_at_index(listint_t **head, unsigned int index); /*10. Delete at index*/
listint_t *reverse_listint(listint_t **head); /*11. Reverse list*/
size_t print_listint_safe(const listint_t *head); /*12. Print(safe vesion)*/
size_t free_listint_safe(listint_t **h); /*13. Free(safe version)*/
listint_t *find_listint_loop(listint_t *head); /*14. Find the loop*/

#endif
