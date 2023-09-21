#include "main.h"


char *string_toupper(char *)
{
	int index =0;

	while (str[index])
	{
	
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
