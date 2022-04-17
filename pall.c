#include "monty.h"

/**
 * main - print all the stacks from last to first
 *
 * @head: pointer to lists head
 * @line_number: line numbers read
 *
 */

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (aux == NULL)
		return;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
	(void)line_number;
}
