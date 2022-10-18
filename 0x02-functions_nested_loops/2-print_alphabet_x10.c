#include "main.h"

/**
 * print_alphabet_x10 - added to main.h
 * Description: function uses _putchar function to print
 * alphabets in lowercase ten times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
