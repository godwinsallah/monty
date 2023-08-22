#include "task0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_stack - Initializes a stack.
 * @stack: Pointer to the stack.
 */
void init_stack(Stack *stack)
{
	stack->top = -1;
}

/**
 * is_stack_empty - Checks if the stack is empty.
 * @stack: Pointer to the stack.
 *
 * Return: 1 if the stack is empty, 0 otherwise.
 */
int is_stack_empty(Stack *stack)
{
	return (stack->top == -1);
}

/**
 * is_stack_full - Checks if the stack is full.
 * @stack: Pointer to the stack.
 *
 * Return: 1 if the stack is full, 0 otherwise.
 */
int is_stack_full(Stack *stack)
{
    return (stack->top == STACK_SIZE - 1);
}

/**
 * push - Pushes a value onto the stack.
 * @stack: Pointer to the stack.
 * @value: Value to push onto the stack.
 */
void push(Stack *stack, int value)
{
	if (!is_stack_full(stack))
	{
		stack->items[++stack->top] = value;
	}
}

/**
 * pop - Pops a value from the stack.
 * @stack: Pointer to the stack.
 *
 * Return: The popped value, or -1 if the stack is empty.
 */
int pop(Stack *stack)
{
	if (!is_stack_empty(stack))
	{
		return (stack->items[stack->top--]);
	}
	return (-1);
}

/**
 * print_all - Prints all values in the stack.
 * @stack: Pointer to the stack.
 */
void print_all(Stack *stack)
{
	int i;

	for (i = stack->top; i >= 0; i--)
	{
		printf("%d\n", stack->items[i]);
	}
}

