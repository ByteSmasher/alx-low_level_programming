#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
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
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
