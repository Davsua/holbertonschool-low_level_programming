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
		for (i = 0; i < size; i++)
		{
			for (k = size - i; k > 1; k--)
			{
				_putchar(' ');
			}
			for (o = 0; o <= i; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
