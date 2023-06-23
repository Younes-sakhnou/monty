#include "monty.h"

/**
 * rotl_stack - Rotates the stack to the top
 * @head: Double pointer to the head of the stack
 * @counter: Unused line count
 *
 * Return: Nothing
 */
void rotl_stack(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
		return;

	aux = (*head)->next;
	aux->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
