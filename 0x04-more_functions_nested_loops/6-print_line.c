#include "main.h"

/**
 * print_line print a horizontal
 * line.
 * @n: is the times that the _
 * ill be print
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
