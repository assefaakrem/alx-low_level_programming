#include "main.h"
#include <stdio.h>
/**
*reset_to_98 - a function that takes a pointer a and b to an int as parameter
*and updates the value it points to to 98
*@a: input 1
*@b: input 2
*Return: n
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
