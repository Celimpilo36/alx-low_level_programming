#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: always (0) success
 *
 */
int main(void)
{
	char hex_string[] = "0123456789abcdef";
	int count = 0;

	while (hex_string[count] != '\0')
	{
		putchar(hex_string[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
