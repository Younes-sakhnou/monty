#include "monty.h"

/**
 * pstr_function - Prints the string starting at the top of the stack,
 *                 followed by a newline
 * @head: Head of the stack
 * @counter: Line count
 *
 * Return: Nothing
 */
void pstr_function(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void) counter;

	current = *head;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
