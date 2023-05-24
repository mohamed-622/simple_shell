#include "shell.h"

/**
 * _strcopy - Copies the string pointed to by src into dest.
 * @dest: copydestination
 * @src: copysource
 *
 * Return: A pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
