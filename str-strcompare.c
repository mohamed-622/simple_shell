#include "shell.h"

/**
 * _strcompare - Compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: multi value
 *
 */

int _strcompare(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
val = s1[i] - s2[i];
return (val);

}
