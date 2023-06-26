#include "shell.h"

/**
  * handle_path - A function that handles the path
  * @command: A pointer to the function
  * Return: NULL
  */

char *handle_path(char *command)
{
	char *path = getenv("PATH");
	char *directory = strtok(path, ":");
	char _path[PATH_MAX]; /* Command path */
	char error[] = "Command not found\n";

	if (command[0] == '/')
	{
		if (access(command, X_OK) == 0)
			return (command);
		else
			return (NULL);
	}

	while (directory != NULL)
	{
		snprintf(_path, sizeof(_path), "%s/%s", directory, command);

		if (access(_path, X_OK) == 0)
			return (_strdup(_path));

		directory = strtok(NULL, ":");
	}
	write(STDERR_FILENO, command, string_len(command));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, error, string_len(error));
	exit(EXIT_FAILURE);

	return (NULL);
}
