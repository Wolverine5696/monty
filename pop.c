#include "monty.h"

/**
 * pop - removed the last from the stack
 * @head: pointer to the lists head
 * @line_number: line number
 * _errors: checks for errors
 */

void pop(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (aux == NULL)
		_errors(4, line_number, head); /* pop failed */

	else if (aux->prev == NULL && aux->next == NULL)
	{
		free(aux);
		*head = NULL;
	}
	else if (aux->next != NULL)
	{
		*head = aux->next;
		(*head)->prev = NULL;
		free(aux);
	}
}
