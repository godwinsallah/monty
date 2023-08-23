#include "task0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * swap - swaps item in stack
 * stack: block to be itrated
 * Return: void
 */

void swap(Stack *stack)
{
	if (stack->top < 1)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}

	int top_item = pop(stack);
	int second_item = pop(stack);

	push(stack, top_item);
	push(stack, second_item);
}
