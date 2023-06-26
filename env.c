#include "shell.h"

/**
  * _env - Prints out the environment variable
  * @env: Pointer to the environment variable
  * Return: 0
  */

void _env(char **env)
{
	int a;

	for (a = 0; env[a] != NULL; a++)
	{
		write(STDOUT_FILENO, env[a], string_len(env[a]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
