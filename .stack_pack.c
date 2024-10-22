#include "monty.h"

/**
 * add_top_stack - add a node on top of stack list
 * @head: head node of the list
 * @n: number of stack on list
 *
 * Return: address to the new element or NULL
 */
stack_t *add_top_stack(stack_t **head, const int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head)->prev != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}

/**
 * add_end_stack - add a node on the bottom/end of the stack list
 * @head: head node of the list
 * @n: number to store in the list
 *
 * Return: address of the new element or NULL
 */
stack_t *add_end_stack(stack_t **head, const int n)
{
	stack_t *new = NULL;
	stack_t *tmp = *head;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;

	return (*head);
}

/**
 * free_stack - free stack list
 * @head: head node of the stack
 *
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
