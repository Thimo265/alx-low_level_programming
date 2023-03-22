#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar
 *
 * description - a program will print every character on a new line
 *
 * Return: always 0
 */
int main(void)
{
	char *i = "_putchar";

	while (*i)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
	return (0);
}
