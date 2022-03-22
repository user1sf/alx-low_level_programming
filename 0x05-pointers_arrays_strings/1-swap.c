#include "main.h"

/**
 *swap_int - swap values of two int a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 *Return: void that
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	b = f;
}
