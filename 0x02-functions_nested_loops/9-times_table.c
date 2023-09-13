#include "main.h"
void times_table(void);
{
	int i, j, results;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			results = i * j;
			if (j == 0)
				printf ("%d", resuluts);
			else
			{
				printf ("2%d" , results);
				if (j != 9)
					printf (",");
			}

		}
		printf ("\n");
	}
}

