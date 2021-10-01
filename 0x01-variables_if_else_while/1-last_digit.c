#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d and is ", n, n % 10);
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (n % 10 > 5)
	{
		printf("0\n");
	}
	else
	{
		printf("greater than 5\n");
	}

	return (0);
}
