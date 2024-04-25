#include <stdio.h>
/**
 * main - 'entry point'
 * Description: 'programm to returns sizes of defferent data types
 *
 * Return: Always 0 (successful)
 */

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",(unsigned long) sizeof(float));
	return (0);
}
