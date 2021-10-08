#include "main.h"

/**
 * print_numbers - print the number
 * beetwen 0-9 follow by a
 * new lin
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
