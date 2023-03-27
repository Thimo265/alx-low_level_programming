#include "main.h"
/**
 * swap_int - swaps the digits
 * @a: first digit
 * @b: 2nd digit
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
