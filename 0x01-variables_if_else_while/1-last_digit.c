#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is les than 6 and not 0\n", n, m);
	}
	return (0);
}
