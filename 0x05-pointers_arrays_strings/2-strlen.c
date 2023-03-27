#include "main.h"
/**
 * _strlen - takes in string
 * @s: string pointer
 * Return: arg
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
