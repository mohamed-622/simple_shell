#include "shell.h"

/**
  *_concastr - Concatenates two strings.
  *@dest: The destination string.
  *@src: The source string to be appended.
  *Return: Pointer to the resulting string (dest).
  **/

char *_concastr(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	dest[i] = '\0';
	return (dest);
}
