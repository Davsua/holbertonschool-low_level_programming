#include "main.h"
#include <stdio.h>
/**
 * main - print the numbers between 1-100
 * except the multiples of 3, multiples of 5
 * and multiples of both
 *
 * Return: nothing
 */
int main(void)
{
	int a, b = 100;

	for (a = 1; a <= b; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (a % 5 == 0)
		{
			printf("buzz");
		}
		else if (a % 3 == 0)
		{
			printf("fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
