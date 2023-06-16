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
		printf("posative");
	}
	else if (n<0)
	{
		printf("negative");
	}
	else
	{
		printf("0");
	}
	return (0);
}
