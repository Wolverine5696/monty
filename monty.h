#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack
 * @n: int
 * @prev: points to the prev element of the stack
 * @next: points to the next element of the stack
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instuction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * 
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _errors(int errornum, unsigned int line_number, stack_t **stack);

void _errors2(int errornum, unsigned int __attribute__((unused)) line_number,
			      stack_t **stack);

void checkFunction(char *token, unsigned int line_number, stack_t **head);

int check_push(char *s);

int _parseArg(char *c);

void free_list(stack_t *stack);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void check_command(stack_t **stack, char *op, unsigned int line_num);
int space_count(char *str, char *delimiter);
void monty_exit(stack_t **stack);
void read_file(stack_t **stack);
FILE *monty_init(int argc, char *file);
char **ndsplitter(char *fun, char *delimiter);
void free_list(char **list);
int isonlyspaces(char *str);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

#endif 
