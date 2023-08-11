#include<stdio.h>
/**
 * main - Prints all single digit numbers
 * of base 10 starting from 0
 * followed by a new line.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int alph;

	for (alph = 0; alph < 10; alph++)
	{
		printf("%i", alph);
	}
	printf("\n");
	return (0);
}
