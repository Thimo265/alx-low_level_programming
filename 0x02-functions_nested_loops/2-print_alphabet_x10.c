#include "main.h"
/**
 * print_alphabet_x10 - contains a chunkn of code
 *
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchaar(i);
		}
		_putchar('\n');
	}
}
