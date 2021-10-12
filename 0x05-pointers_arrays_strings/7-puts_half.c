#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string that contains numbers beetwen 0 - 10
 * return: null
 */

void puts_half(char *str)
{
	int cant = 0;
	int i, j;

	while (str[cant] != 0)
	{
		cant++;
	}
	j = cant / 2;
	for (i = 0; i < cant; i++)
	{
		_putchar(str[j++]);
	}
	_putchar('\n');
}

