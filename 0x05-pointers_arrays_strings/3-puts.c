#include "main.h"

/**
 * _puts - Print a string
 * @str: The String to point
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
