#include "main.h"

/**
 * swap_int - swap the values beetwen a and b
 * @a: first pointer
 * @b: second pointer
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
