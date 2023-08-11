#include <stdio.h>
/**
 * 
 *
 * Prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 *
 */
int main(void)
{
	int SD;

	for (SD = 0; SD < 10 ; SD++)
	{
		putchar('0' + SD);
	}
	putchar('\n');
	return (0);
}
