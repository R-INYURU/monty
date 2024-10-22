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
		err(1);

	open_file(argv[1]);
	free_nodes();

	return (EXIT_SUCCESS);
}
