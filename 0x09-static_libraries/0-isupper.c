#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char for checking
 * Return: 0 or 1 depending on thee outcome
 *
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

