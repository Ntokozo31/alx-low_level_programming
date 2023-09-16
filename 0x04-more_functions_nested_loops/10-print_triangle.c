#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle of '#' characters followed by a newline
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int row, col;

    if (size <= 0)
    {
_putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= row; col++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
