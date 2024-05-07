#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program assign random number to viriable
 *
 * Return: Always (0) successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		puts("is positive");
	else if (n == 0)
		puts("is zero");
	else
		puts("is negative");
	return (0);
}
