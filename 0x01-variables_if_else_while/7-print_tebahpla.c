#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: always (0) success
 */
int main(void)
{
	char alphabets[] = "zyxwvutsrqponmlkjihgfedcba";
	int count = 0;

	while (alphabets[count] != '\0')
	{
		putchar(alphabets[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
