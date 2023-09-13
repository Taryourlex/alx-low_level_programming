#include <stdio.h>
/**
 * main - Natural number below 10
 *
 * Return: (0)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
