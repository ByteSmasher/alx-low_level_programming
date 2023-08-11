#include<stdio.h>
/**
 * main - entry point
 *
 * A program that prints all possible different combinations of two digits.
 *
 *
 */
int main(void)
{
	int first;
	int second;

	for (first = 10; first <= 19; first++)
	{
		for (second = 10; second <= 19; second++)
		{
			if ((second % 10) > (first % 10))
			{
				putchar((first % 10) + '0');
				putchar((second % 10) + '0');

				if (first != 18 || second != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
