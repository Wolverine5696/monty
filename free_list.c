#include "monty.h"

/**
 * free_list -frees the list
 * @stack: pointer to lists head
 *
 */
void free_list(stack_t *stack)
{
	stack_t *aux = stack;

	while (aux != NULL)
	{
		stack_t *next = aux->next;

		free(aux);
		aux = next;
	}
}
