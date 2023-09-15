#include "main.h"

/**
 * isdigit.c - Check if the charecter is a digit
 * @x: The number to be checked
 * Return: 1 for a charecter that will be a digit or 0 for any 
 */

int _isdigit(int x)

{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);

}
