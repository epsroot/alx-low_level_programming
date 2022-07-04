#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - assigns a random number to variable n each time its executed
*also prints the last digit of the number stored in variable n
*Return : Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
	printf("%d is zero\n", n);
if (n > 0)
	printf("%d is positive\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
