#include "monty.h"

/**
 * push - adds a new element to the stack
 *
 * @stack: pointer to the list's head
 * @line_number: line number read to determine order
 * @_errors: functions that check for errors
 * @_parsearg: checks if second arg is a integer
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = (stack_t *) malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		free(new_node);
		free(second);
		_errors(1, line_number, stack);
	}
	if (second == NULL || _parseArg(second) == 0)
	{
		free(new_node);
		_errors(2, line_number, stack);
	}
	if ((isdigit(*second) != 0) || (*second == '-' && isdigit(second[1])))
		new_node->n = atoi(second);

	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;

	(*stack) = new_node;
}
