#include "main.h"
/**
 * _islower - fuction to check if its lowercase
 * @c: The argument
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
