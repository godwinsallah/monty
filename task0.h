#ifndef TASK0_H
#define TASK0_H
#include <string.h>

#define STACK_SIZE 100

/**
 * struct Stack - A structure representing a stack
 * @items: An array to store stack elements
 * @top: The index of the top element in the stack
 */

typedef struct Stack {
    int items[STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *stack);
int is_stack_empty(Stack *stack);
int is_stack_full(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
void print_all(Stack *stack);
void swap(Stack *stack);
void add(Stack *stack);

#endif /* TASK0_H */

