#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line of the integer
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, l, m, sum;

	l = 1;

	m = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (l != 20365011074)
		{
			printf("%ld, ", l);
		} else
		{
			printf("%ld\n", l);
		}
		sum = l + m;
		l = m;
		l = sum;
	}

	return (0);
}
