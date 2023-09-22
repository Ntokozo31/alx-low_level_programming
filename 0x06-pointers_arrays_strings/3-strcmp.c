#include "main.h"

/**
 * _strcamp - Comperes two strings
 *
 * This function comperes two strings 's1' and 's2', character by character
 * it returns an integer value:
 *   -Negative if 's1' is lexicographically less then 's2'
 *   -Positive if 's1' is lexicographically greater than 's2'
 *   -zero if both strings are identical
 *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer indicating the comparison result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
