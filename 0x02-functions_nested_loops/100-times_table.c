#include <stdio.h>


void prints_times_table(int n)
{
if (n < 0 || n > 15)
{
	return;
}
for (int i = 0; i <= 10; i++)
{
printf("%2d x %2d = %2d\n", i, n, i, *n);
}
}

int main(void)
{
int n;
printf("Enter a number between 0 and 15:");
scanf("%d", &n);
prints_times_table(n);
return (0);
}
