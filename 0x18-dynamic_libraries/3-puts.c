#include "main.h"
/**
 * _puts - prints a str, followed by a new line, of the integer
 * @str: pointer to the string to print in the integer
 * Return: void or naught
*/


void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
