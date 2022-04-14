#include "monty.h"

/**
 * pint - prints the last element added to the stack
 * @head: pointer to the lists head
 * @line_number: line number read
 */

void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
		_errors(3, line_number, head);

	printf("%d\n", (*head)->n);
}
