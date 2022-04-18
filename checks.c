#include "monty.h"

/**
 * checkFunction - selects the correct function input by the user.
 * @token: input operator
 * @line_number: line number read
 * @head: pointer to the head of the list
 *
 */

void checkFunction(char *token, unsigned int line_number, stack_t **head)
{
	instruction_t func_code[] = {
		{ "push", push }, { "pall", pall },
		{ "pint", pint }, { "pop", pop },
		{ "swap", swap }, { "add", add },
		{ "nop", nop }, {NULL, NULL}
	};
	int x = 0;

	while (x < 15)
	{
		if (strcmp(func_code[x].opcode, token) == 0)
		{
			func_code[x].f(head, line_number);
			break;
		}
		x++;
	}
	if (x == 15)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, token);
		free(token);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_push - checks if the instruction read is "push"
 *
 * @s: instruction passed
 * Return: 0 on failure, 1 on succes
 */
int check_push(char *s)
{
	char *accept = "push";
	int x = 0;

	if (s == NULL)
		return (0);
	while (s[x] == accept[x] && accept[x] != '\0')
		x++;
	if (x == 4)
		return (1);
	return (0);
}

/**
 * _parseArg - checks if push is a integer
 * @c: argument
 * Return: 1 on Success or 0 on failure
 */
int _parseArg(char *c)
{
	int red = 0;

	while (((c[red] <= '9' && c[red] >= '0') || (c[0] == '-')) && c != 0)
	{
		if (c[red + 1] == 0)
			return (1);
		red++;
	}
	return (0);
}
