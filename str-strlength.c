/**
 * _strlength - measures a string
 * @s: str
 * Return: length of the str
 */

int _strlength(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}
