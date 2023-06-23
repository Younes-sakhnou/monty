#include "monty.h"

/**
 * add_queue - Function that adds a node to the tail of the queue
 * @head: Pointer to the head of the queue
 * @value: New value to be added
 *
 * Return: Nothing
 */
void add_queue(stack_t **head, int value)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = value;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
