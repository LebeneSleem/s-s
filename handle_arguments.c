#include "shell.h"

/**
 * handle_arguments - function that handles command
 * line arguments in a simple unix shell
 * by tokenizing the command line input
 * and handles the built in exit function
 * if the token suppliedis exit
 * @lineptr: command line input to tokenize
 * @argv: Array to store the tokens
 */

void handle_arguments(char *lineptr, char **argv)
{
	int b = 0;
	char *args, *lineptr_copy;

	lineptr_copy = _strdup(lineptr);

	args = strtok(lineptr_copy, " ");

	while (args != NULL)
	{
		argv[b] = _strdup(args);
		b++;
		args = strtok(NULL, " ");
	}
	argv[b] = NULL;/*end of the array*/

	/*check if the argument passed is exit*/
	if (string_cmp(argv[0], "exit") == 0)
	{
		free(lineptr);
		exit(EXIT_SUCCESS);
	}
}
