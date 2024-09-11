#include<stdio.h>

/**
 * print_alphabet - entry point
 * Description: function to output all lower case alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

/**
 * main - entry point
 *
 * Return: Always (0) successfull
 */

int main(void)
{
	print_alphabet();
	return (0);

}
