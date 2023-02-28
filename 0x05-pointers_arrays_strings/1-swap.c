#include <stdio.h>
/**
 * Write a function that swaps the values of two integers.
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
