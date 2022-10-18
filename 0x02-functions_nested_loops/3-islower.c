#include "main.h"

/**
 * _islower - Added to main dot h
 * @c: An input character
 * Description: function uses _putchar to print
 * alphabets in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
