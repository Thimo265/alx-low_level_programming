#include "main.h"
/**
 *_puts - prints a string
 *
 * @str: pointer for the string
 *
 * Return: arg
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}

	_putchar('\n');
}
