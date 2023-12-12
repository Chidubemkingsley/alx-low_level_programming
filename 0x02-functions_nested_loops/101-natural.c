#include <stdio.h>
/**
  * main - sum of all multiples being computed and printed out
  * 3 or 5 below in the table of the integer
  * Return: Nothing of the integer
  */

int main(void)
{
	int i, result;
	int endPoint = 1024;

	for (i = 0; i < endPoint; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
