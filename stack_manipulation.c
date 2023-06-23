#include "monty.h"

/**
 * add_elements - Function that adds the top two elements of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line count
 *
 * Return: Nothing
 */
void add_elements(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	temp = current->n + current->next->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}

/**
 * subtract_elements - Function that subtracts nodes
 * @head: Double pointer to the head of the stack
 * @line_number: Line count
 *
 * Return: Nothing
 */
void subtract_elements(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int sub, num_nodes;

	temp = *head;
	for (num_nodes = 0; temp != NULL; num_nodes++)
		temp = temp->next;

	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}

/**
 * multiply_elements - multiplies the top two elements of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line count
 *
 * Return: Nothing
 */
void multiply_elements(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	temp = current->next->n * current->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}

/**
 * divide_elements - Function that divides the top two elements of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line count
 *
 * Return: Nothing
 */
void divide_elements(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = current->next->n / current->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}

/**
 * modulo_elements - Function that computes the remainder of the division
 * of the second top element of the stack by the top element of the stack
 * @head: Double pointer to the head of the stack
 * @line_number: Line count
 *
 * Return: Nothing
 */
void modulo_elements(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = current->next->n % current->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}
