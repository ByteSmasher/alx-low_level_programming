#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A' ; alph <= 'Z' ; alph++)
	{
		putchar(dan);
	}
	putchar('\n');
	return (0);
}
