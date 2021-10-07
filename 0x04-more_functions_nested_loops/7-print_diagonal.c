#include "main.h"

/**
 * print_diagonal prints a diagonal
 * with \
 * @n: indicate the times wthat \
 * will be print
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
