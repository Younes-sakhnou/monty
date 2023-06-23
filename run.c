#include "monty.h"
/**
* execute - function that executes the opcode
* @stack: head stack linked list
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
*
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_node_to_stack}, {"pall", print_stack}, {"pint", print_top_of_stack},
				{"pop", pop_from_stack},
				{"swap", swap_elements},
				{"add", add_elements},
				{"nop", do_nothing},
				{"sub", subtract_elements},
				{"div", divide_elements},
				{"mul", multiply_elements},
				{"mod", modulo_elements},
				{"pchar", pchar_function},
				{"pstr", pstr_function},
				{"rotl", rotl_stack},
				{"rotr", rotr},
				{"queue", queue_function},
				{"stack", stack_function},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
