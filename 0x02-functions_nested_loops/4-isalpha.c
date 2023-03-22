#include "main.h"

/**
 * _isalpha - code fucntion for checking alphabet
 *
 * @c: return value
 *
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
