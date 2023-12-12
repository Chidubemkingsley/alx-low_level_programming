#include <stdio.h>


/**
  * main - this actually shows the main printing funtion of the integer
  * less than 4000000. of the integer
  * Return: 0 of the particular integer
  */


int main(void)
{
	int i = 0;
	long l = 1, m = 2, sum = m;


	while (l + m < 4000000)
	{
		l += m;
		if (l % 2 == 0)
		sum += m;
		l = m - l;
		++i;
	}
	printf("%ld", sum);
	return (0);
}

