#include "main.h"

/**
 * _abs - added to main
 * @r: an integer input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
