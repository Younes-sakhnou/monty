#include "monty.h"

void queue_function(stack_t **, unsigned int);
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Entry point for the Monty code interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *line;
	FILE *file;
	size_t bufsize = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line > 0)
	{
		line = NULL;
		read_line = _getline(&line, &bufsize, file);
		bus.content = line;
		counter++;

		if (read_line > 0)
		{
			execute(line, &stack, counter, file);
		}

		free(line);
	}

	free_stack(stack);
	fclose(file);

	return (0);
}

/**
 * queue_function - Function that sets the queue mode
 * @head: Pointer to the head of the queue
 * @counter: Line count
 *
 * Return: Nothing
 */
void queue_function(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
