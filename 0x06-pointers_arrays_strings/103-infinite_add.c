#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sun - a pointer to the result.
 *         If r cannot store the sun - 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2, n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r index) = (num % 10) + '0';
	}
	for  (; *n2; n2--, r_index--)
	{
		num = (*
