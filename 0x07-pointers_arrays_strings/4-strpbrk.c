#include "main.h"

/**
 * _strpbrk - function name
 * @s: parameter 1
 * @accept: parameter 2
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	const char *a = accept;

	while (*a != '\0')
	{
	if (*s == *a)
	return (s);
	a++;
	}
	s++;
	}
	return (NULL);
}
