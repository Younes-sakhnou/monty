#include "monty.h"

/**
 * pop_from_stack - Function that removes the top element from the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line number
 *
 * Return: Nothing
 */
void pop_from_stack(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = temp->next;
	free(temp);
}

/**
 * print_top_of_stack - Function that prints the top element of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line number
 *
 * Return: Nothing
 */
void print_top_of_stack(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

/**
 * do_nothing - Function that does nothing
 * @head: Double pointer to the head of the stack
 * @line_number: Line number
 *
 * Return: Nothing
 */
void do_nothing(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
}
