#include "monty.h"

/**
 * push_node_to_stack - Function that adds a node to the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line number
 *
 * Return: Nothing
 */
void push_node_to_stack(stack_t **head, unsigned int line_number)
{
	int i, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	i = atoi(bus.arg);
	if (bus.lifi == 0)
		push_node(head, i);
	else
		add_queue(head, i);
}
