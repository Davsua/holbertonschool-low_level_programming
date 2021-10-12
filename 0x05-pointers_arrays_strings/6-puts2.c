#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string with numbers beetwen 0 - 10
 * return: null
 */

void puts2(char *str)
{
	int cant = 0, i;

	while (str[cant] != 0)
	{
		cant++;
	}

	for (i = 0; i < cant; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
