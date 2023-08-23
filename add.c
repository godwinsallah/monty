#include "task0.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(Stack *stack)
{
	if (stack->top < 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}

	int top_item = pop(stack);
	int second_item = pop(stack);

	push(stack, second_item + top_item);
}
