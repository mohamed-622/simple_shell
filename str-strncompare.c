#include "shell.h"

/**
 *_strncompare - Compares two strings up to a specified number of characters.
 *@s1: 1st str
 *@s2: 2nd str
 *@n: num of char
 * Return: difference between the ASCII values of the first differing chars.
 */

size_t _strncompare(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}
