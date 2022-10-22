#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is execute
 * and print the last digit of the number stored in the variable n
 * Return 0 (success)
 */


void positive_or_negative(int)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0)
}
/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
