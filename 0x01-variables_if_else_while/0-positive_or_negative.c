#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
<<<<<<< HEAD
 * main - assigns a random number to int n everytime
 * 
=======
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
>>>>>>> 4043228f4b34cf6001c967a0bf25717b67d801fc
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
<<<<<<< HEAD
		printf("%d is positive\n",n);
	else if (n == 0)
		printf("%d is zero\n",n);
	else if (n < 0)
		printf("%d is negative\n",n);
=======
		printf("%i is positive \n", n);
	else if (n == 0)
		printf("%i is zero \n", n);
	else
		printf("%i is negative \n", n);

>>>>>>> 4043228f4b34cf6001c967a0bf25717b67d801fc
	return (0);
}
