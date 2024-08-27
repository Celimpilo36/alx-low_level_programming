#include <stdio.h>
/**
 *main - entry point
 *Description: program prints the alphabet in lowercase, followed by new line
 *
 *Return: always (0) success
 */
int main(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int count = 0;
while (alphabets[count] != '\0')
{
putchar(alphabets[count]);
count++;
}
putchar('\n');
return (0);
}
