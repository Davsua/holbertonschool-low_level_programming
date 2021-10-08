#include "main.h"

void print_triangle(int size)
{
	int i, k, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('\n');
			for (k = size - i; k > 0; k--)
			{
				_putchar(' ');
			}
			for (o = 1; o <= i; o++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
