#include <stdio.h>
/**
 * main - Prints all possible
 * combinations single-digit
 * numbers.
 *
 * Return: Always 0.
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
