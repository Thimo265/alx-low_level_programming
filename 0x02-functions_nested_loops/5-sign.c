#include "main.h"

/**
 * print_sign - func for all checks
 *
 * @n: varriable
 *
 * Return: 1 for postive, -1 for negative and 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
