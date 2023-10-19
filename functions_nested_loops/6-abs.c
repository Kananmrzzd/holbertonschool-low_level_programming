#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 * @n: the int number
 *
 * Return: n or -n
 *
 */
int _abs(int n)
{

	n = n >= 0 ? n : -n;

	return (n);
}
