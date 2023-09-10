#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Description: 'get the last digit of a number'
* Return: always 0
*/
int main(void)
{
		int n;
		int kn;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
}
			kn = n % 10
			if (kn > 5)
			{
				printf("Last digit of %d is %d and is greater then 5", n, kn);
			}
			else if (kn == 0)
			{
				printf("Last digit of %d is %d and is", n, kn); }
			else
			{
				printf("Last digit of %d is %d and less than 6 and is not 0", n, kn);
			}
			return (0);
}
