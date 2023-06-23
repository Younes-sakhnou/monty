#include "monty.h"

/**
 * print_stack - Function that prints all elements in the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Unused line number
 *
 * Return: Nothing
 */
void print_stack(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *head;
	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * swap_elements - Function that swaps the top two elements of the stack
 * @head: Pointer to the head of the stack
 * @line_number: Line number
 *
 * Return: Nothing
 */
void swap_elements(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int length = 0, temp;

	current = *head;
	while (current)
	{
		current = current->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}

