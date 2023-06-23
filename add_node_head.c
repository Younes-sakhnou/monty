#include "monty.h"

/**
 * push_node - Add a node to the head of the stack
 * @head: Pointer to the head of the stack
 * @n: Value to be added
 *
 * Return: void
 */
void push_node(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

