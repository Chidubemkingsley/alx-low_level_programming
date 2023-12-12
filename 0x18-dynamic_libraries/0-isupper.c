#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if c is uppercase letter in the integer
 *
 * @c: input for char of the integer
 *
 * Return: 1 if its uppercase, 0 if not in the particular integer
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
