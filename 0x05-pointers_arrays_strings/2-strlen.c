#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: pointer
 * return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != 0; s++)
	{
		i++;
	}
	return (i);
}
