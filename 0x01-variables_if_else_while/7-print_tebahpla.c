#include <stdio.h>
/**
 * 
 *
 * Prints the lowercase alphabet in reverse, followed by a new line.
 *
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
