#include "main.h"
/**
 * islower - checks for lowercase charecter
 * Return: 1 or 0
 */

int _isLower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
			return (0);
}
