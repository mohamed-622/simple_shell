#include "shell.h"

/**
 * _get_variable_path - variable PATH.
 * @env: env
 * Return: PATH.
 */

char *_get_variable_path(char **env)
{
	size_t index = 0, var = 0, count = 5;
	char *path = NULL;

	for (index = 0; _strncompare(env[index], "PATH=", 5); index++)
		;
	if (env[index] == NULL)
		return (NULL);

	for (count = 5; env[index][var]; var++, count++)
		;
	path = malloc(sizeof(char) * (count + 1));

	if (path == NULL)
		return (NULL);

	for (var = 5, count = 0; env[index][var]; var++, count++)
		path[count] = env[index][var];

	path[count] = '\0';
	return (path);
}
