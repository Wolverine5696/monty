#include "monty.h"

/**
 * nop - does nothing to the stack
 * @stack: pointer to the lists head node
 * @line_number: line number
 *
 */

void nop(stack_t **stack, unsigned int line_number)
{
	return;
	(void)line_number;
	(void)**stack;
}
