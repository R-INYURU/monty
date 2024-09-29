#include "monty.h"

stack_t *head = NULL;

/**
 * main - check the code
 * @argc: number of arguments passed
 * @argv: array of the arguments passed
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	if (argc < 2 || argc >2)
		error(1);

	free_stack(head);

	return (EXIT_SUCCESS);
}

