#include "main.h"

/**
 *_islower - capable to checks for a lowercase character
 *@c: letter being tested of the integer
 * Return: Always 0
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
