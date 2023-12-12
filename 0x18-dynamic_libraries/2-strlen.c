#include "main.h"
/**
 * _strlen - find the length of a string of the integer
 * @s: pointer to the string to check of the integer
 * Return: void or naught
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
