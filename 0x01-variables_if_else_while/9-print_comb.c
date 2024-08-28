#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program prints all possible combinations of single-digit
 * numbers
 * Numbers must be separated by ',', followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: always (0) success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
