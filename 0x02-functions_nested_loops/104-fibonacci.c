#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with
 * 1 and 2 separated by a coma followed by a space.
 * Return: always 0
 */

int main()
{
	unsigned int a = 1, b = 2, c, count = 2;

	printf("%u,%u" a,b);

	while (count < 98)
	{
	c = a + b;
	a = b;
	b = c;
	count++;
	printf("%u",c);
	if (count < 98)
	{
	printf(",");
	}
	else
	{
	printf("\n");
	}
	}
	return (0);
}
	
