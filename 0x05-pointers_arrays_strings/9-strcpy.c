#include "main.h"

/**
 * _strcpy - copy the string of pointer
 * in other pointer
 * @dest: take the string from src
 * @src: have the string to copy in dest
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
