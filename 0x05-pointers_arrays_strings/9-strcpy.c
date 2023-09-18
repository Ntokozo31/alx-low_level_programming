#include "main.h"
#include <string.h>

/**
 * _strpc - Copy a string
 * @dest: destenation value
 * @s: Source value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

