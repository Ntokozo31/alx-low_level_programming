#include "main.h"
/**
 * _strspn - function name
 * @s: parameter 1
 * @accept: parameter 2
 * Return: character counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (k = 0; s[i] != accept[k]; k++)
	{
	if (accept[k] == '\0')
	return (i);
	}
	}
	return (0);
}
