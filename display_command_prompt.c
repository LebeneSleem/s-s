#include "shell.h"

/**
 * display_command_prompt - displays a prompt
 * and waits for user to enter a command
 * @env: Environment variable
 */

void display_command_prompt(char **env)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t input;
	int a = 0;
	char *argv[Max_Arguments];

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "simple_shell$  ", 15);
		}
		/*input = custom_getline();*/
		input = getline(&lineptr, &n, stdin);
		if (input == NULL)
		{
			free(/*input*/lineptr);
			exit(EXIT_FAILURE);
		}
		while (/*input*/lineptr[a])
		{
			if (lineptr[a] == '\n')
				lineptr[a] = 0;
			a++;
		}
		handle_arguments(input, argv);
		exec_command(argv, env);
	}
	free(/*input*/lineptr);
}
