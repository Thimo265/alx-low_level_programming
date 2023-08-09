#include <unistd.h>;
/**
 * putchar - writes the characters to the output
 * @c: the character to print out
 *
 * Return: 1 when successful and -1 when not
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
