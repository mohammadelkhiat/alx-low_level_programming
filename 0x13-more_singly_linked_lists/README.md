# In this project we will work with more singly linked lists

first thing we do is creating whis README.md file
then we will make the header file "lists.h" and include all the protoypes we need within.
and then do the tasks

## The tasks for this project are:-

### 0. Print list
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf
__The file to create__ - 0-print_listint.c

### 1. List length
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);
__The file to create__ - 1-listint_len.c

### 2. Add node
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
__The file to create__ - 2-add_nodeint.

### 3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
__The file to create__ - 3-add_nodeint_end.c

### 4. Free list
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);
__The file to create__ - 4-free_listint.c

### 5. Free
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL
__The file to create__ - 5-free_listint2.c

### 6.Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0
__The file to create__ - 6-pop_listint.c

### 7. Get node at index
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
__The file to create__ - 7-get_nodeint,c

### 8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0
__The file to create__ - 8-sum_listint.c

###
