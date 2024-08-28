#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: always (0) success
 */
int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		putchar(count + '0');
		count++;
	}
	putchar('\n');
	return (0);
}
