#include "main.h"
/**
 * swap_int -swapping the values of two variables
 *@a :first int
 *@b :second int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
