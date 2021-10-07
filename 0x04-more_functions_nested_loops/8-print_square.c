#include "main.h"

/**
 * print_square prints a square 
 * according to the variable
 * @since: tell the times that 
 * the # will be print
 */

void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
