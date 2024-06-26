#include "monty.h"

/**
 * free_stack - Frees a doubly linked list
 * @head: Pointer to the head of the stack
 *
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *current;

	current = head;

	while (current)
	{
		stack_t *temp = current->next;

		free(current);
		current = temp;
	}
}
