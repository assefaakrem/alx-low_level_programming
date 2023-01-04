#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 *square root of a number
 * @n: input number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getNumSqr(n, 1));
}

/**
 * getNumSqr - function that gets the number of square root
 *
 * @num: input number
 * @i: counter variable
 * Return : if square root
 */

int getNumSqr(int num, int i)
{
	if (i <1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (getNumSqr(n, i - 1));
}
