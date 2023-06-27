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
	int a;
	char *argv[Max_Arguments];

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "simple_shell$ ", 15);
		}

		input = getline(&lineptr, &n, stdin);
		if (input == -1)
		{
			free(lineptr);
			exit(EXIT_FAILURE);
		}
		a = 0;
		while (lineptr[a])
		{
			if (lineptr[a] == '\n')
				lineptr[a] = 0;
			a++;
		}
		handle_arguments(lineptr, argv);
		handle_command_execution(argv, env);
	}
	free(lineptr);
}
