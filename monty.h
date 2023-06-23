#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
* struct bus_s - variables -args, file, line content
* @arg: value
* @file: pointer to monty file
* @content: line content
* @lifi: flag change stack <-> queue
*
* Description: carries values through the program
*/
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

char *_realloc(char *, unsigned int, unsigned int);
ssize_t getstdin(char **, int);
char  *clean_line(char *);
void push_node_to_stack(stack_t **, unsigned int);
void print_stack(stack_t **, unsigned int);
void print_top_of_stack(stack_t **, unsigned int);
int execute(char *, stack_t **, unsigned int, FILE *);
void free_stack(stack_t *);
void pop_from_stack(stack_t **, unsigned int);
void swap_elements(stack_t **, unsigned int);
void add_elements(stack_t **, unsigned int);
void do_nothing(stack_t **, unsigned int);
void subtract_elements(stack_t **, unsigned int);
void divide_elements(stack_t **, unsigned int);
void multiply_elements(stack_t **, unsigned int);
void modulo_elements(stack_t **, unsigned int);
void pchar_function(stack_t **, unsigned int);
void pstr_function(stack_t **, unsigned int);
void rotl_stack(stack_t **, unsigned int);
void rotr(stack_t **stack, unsigned int);
void add_queue(stack_t **, int);
void push_node(stack_t **, int);
void queue_function(stack_t **, unsigned int);
void stack_function(stack_t **, unsigned int);
ssize_t _getline(char **, size_t *, FILE *);


#endif
