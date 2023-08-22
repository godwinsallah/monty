#include <stdio.h>
#include "task0.h"
/**
 * main - pushand pull in monty
 */

int main(void)
{
	Stack stack;

	init_stack(&stack);
	FILE *input_file = fopen("input_file.txt", "r");

	if (input_file == NULL)
	{
		perror("Error opening input file");
		return (1);
	}
	char line[100];
	int line_number = 1;

	while (fgets(line, sizeof(line), input_file) != NULL)
	{
		char opcode[10];
		int value;

		if (sscanf(line, "%s %d", opcode, &value) == 2)
		{
			if (strcmp(opcode, "push") == 0)
			{
				push(&stack, value);
			}
			else
			{
				printf("L%d: Unknown opcode\n", line_number);
				return (1);
			}
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			print_all(&stack);
		}
		else
		{
			printf("L%d: Invalid format\n", line_number);
			return (1);
		}
		line_number++;
	}
	fclose(input_file);
	return (0);
}

