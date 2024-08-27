#include<stdio.h>
/**
 *main - entry point
 *Description: program prints the alphabet in lowercase, and then in uppercase,
 *followed by new line
 *
 * Return: always (0) success
 */
int main(void)
{
	char alphabets_l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count = 0;

	while (alphabets_l[count] != '\0')
	{
		putchar(alphabets_l[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
