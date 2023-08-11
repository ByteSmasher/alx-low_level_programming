#include <stdio.h>
/**
 * 
 *
 * Prints all possible combinations of single-digit numbers.
 *
 *
 */
int main(void)
{
	int test;

	for (test = 48; test <= 57; test++)
	{
		putchar(test);
		if (test != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
