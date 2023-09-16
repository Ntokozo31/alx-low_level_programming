#include "main.h"

/**
 * print_line - Prints a straight line of underscores followed by a newline
 * @n: The number of times the character '_' should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
n--;
}

_putchar('\n');
}
