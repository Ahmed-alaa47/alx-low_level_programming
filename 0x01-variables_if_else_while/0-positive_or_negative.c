#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: posative or negative
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("is posative");
	}
	else if (n<0)
	{
		printf("is negative");
	}
	else
	{
		printf("is 0");
	}
	return (0);
}
