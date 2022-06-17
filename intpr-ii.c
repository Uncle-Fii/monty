#include "monty.h"
#include <stdarg.h>

/**
 * stack - adds data to top of stack
 * @stack: doubly linked list
 * @line_number: the line
 * Return: no return
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	args.order = 1;
}

/**
 * queue - adds data to top of stack
 * @stack: doubly linked list
 * @line_number: the line
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	args.order = 0;
}
