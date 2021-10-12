#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer with the string
 * return: null
 */

void rev_string(char *s)
{
	int c = 0, i;
	char *end, *begin, temp;

	end = s;
	begin = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c - 1; i++)
	{
		end++;
	}
	for (i = 0; i < c / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}

}
