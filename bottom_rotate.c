#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @stack: Pointer to the head of the stack
 * @line_number: Line number (unused)
 *
 * Return: Nothing
 */
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *copy;

	copy = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *stack;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*stack)->prev = copy;
	(*stack) = copy;
}

