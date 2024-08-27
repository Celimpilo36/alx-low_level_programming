#include<stdio.h>
/**
 * main - entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line
 * Print all the letters except q and e
 *
 * Return: always (0) success
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (alphabets[count] != '\0')
	{
		if (alphabets[count] == 'q')
		{
			count++;
		}
		else if (alphabets[count] == 'e')
		{
			count++;
		}
		else
		{
			putchar(alphabets[count]);
			count++;
		}

	}
	putchar('\n');
	return (0);
}
