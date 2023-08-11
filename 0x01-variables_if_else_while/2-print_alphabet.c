#include <stdio.h>
/**
 * Prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
