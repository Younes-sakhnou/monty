#include "monty.h"
#include "monty.h"

void f_stack(stack_t **head, unsigned int counter);
#define INITIAL_BUFFER_SIZE 128

/**
 * _getline - Read a line from a stream
 * @lineptr: Pointer to the buffer storing the line
 * @n: Pointer to the size of the buffer
 * @stream: The stream to read from
 *
 * Return: Number of characters read (including newline), or -1 on failure
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int ch;
	size_t i = 0;
	size_t buffer_size;
	char *buffer, *new_buffer;

	buffer_size = *n;
	buffer = *lineptr;

	if (lineptr == NULL || n == NULL || stream == NULL)
		return (-1);
	if (buffer == NULL)
	{
		buffer = malloc(INITIAL_BUFFER_SIZE);
		if (buffer == NULL)
			return (-1);
		buffer_size = INITIAL_BUFFER_SIZE;
	}

	while ((ch = fgetc(stream)) != EOF)
	{
		if (i >= buffer_size - 1)
		{
			buffer_size *= 2;
			new_buffer = malloc(buffer_size);
			if (new_buffer == NULL)
			{
				return (-1);
			}
			memcpy(new_buffer, buffer, i);
			free(buffer);
			buffer = new_buffer;
		}

		buffer[i++] = ch;

		if (ch == '\n')
			break;
	}

	if (i == 0)
	{
		return (-1);
	}

	buffer[i] = '\0';
	*lineptr = buffer;
	*n = buffer_size;

	return (i);
}

/**
* stack_function - function that prints the top
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void stack_function(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
