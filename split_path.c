#include "shell.h"
/**
 * _values_path - Separate the path in new strings.
 * @arg: Command input of user.
 * @env: Enviroment.
 * Return: Pointer to strings.
 */
int _values_path(char **arg, char **env)
{
	char *token = NULL, *path_rela = NULL, *path_absol = NULL;
	size_t value_path, len;
	struct stat stat_lineptr;

	if (stat(*arg, &stat_lineptr) == 0)
		return (-1);
	path_rela = _get_variable_path(env);/** gets the content of "PATH="*/
	if (!path_rela)
		return (-1);
	token = strtok(path_rela, ":"); /**tokenizes the content of "PATH="*/
	len = _strlength(*arg); /**gets length of arg*/
	while (token)
	{
		value_path = _strlength(token);
		path_absol = malloc(sizeof(char) * (value_path + len + 2));
		if (!path_absol)
		{
			free(path_rela);
			return (-1);
		}
		path_absol = _strcopy(path_absol, token);
		_concastr(path_absol, "/");
		_concastr(path_absol, *arg);

		if (stat(path_absol, &stat_lineptr) == 0)
		{
			*arg = path_absol;
			free(path_rela);
			return (0);
		}
		free(path_absol);
		token = strtok(NULL, ":");
	}
	token = '\0';
	free(path_rela);
	return (-1);
}
