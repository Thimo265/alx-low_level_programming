#include "main.h"

/**
 * _islower - chunk of code to check case of letters
 *
 * @c: is char
 *
 * Return: return 1 is it is equal and 0 othwerwise
 */
int _islower(int c)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
