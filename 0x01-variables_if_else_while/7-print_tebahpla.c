#include <stdio.h>
/**
 * main - Prints all lowercase
 * alphabet in reverse
 * followed by a new line.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
