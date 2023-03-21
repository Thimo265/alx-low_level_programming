#include "main.h"

/**
 * main - contains code that prints putchar
 *
 *Description: prints _putchar with putchar prototype

 * Return: always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;
	
	for (ch = 0; ch < 1; ch ++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
