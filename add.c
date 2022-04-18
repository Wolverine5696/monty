#include "monty.h"

/**
 * add - adds a element to the top of the stack
 * @head: lists head
 * @line_number: line number read
 *
 */

void add(stack_t **head, unsigned int line_number)
{
	int red;

	if (*head == NULL || ((*head)->prev == NULL && (*head)->next == NULL))
		_errors(6, line_number, head);

	red = (*head)->n + (*head)->next->n;
	pop(head, line_number);
	(*head)->n = red;
}
