#include <uniistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar (char c)
{
	Return (write(1, &c, 1));
}
