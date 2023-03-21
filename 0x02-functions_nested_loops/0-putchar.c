#include "main.h"

/**
 * print_char - prints _putchar
 *
 * description - a program will print every character on a new line
 *
 * Return: always 0
 */
char print_char(void)
{
	char *i = " _putchar";

	while (*i)
	{
		_putchar(*i);
		i++;
	}

	return (0);
}
