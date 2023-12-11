#include "main.h"

/**
 * print_last_digit - particularly prints the last digit of a number
 * @n: the int to extract the last digit from the integer
 * Return: value of the last digit of the integer
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
