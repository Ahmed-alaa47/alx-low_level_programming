#include "main.h"

/**
 * _abs _ function that calculate the absolute value
 *
 * @n: takes an integer type input for function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
