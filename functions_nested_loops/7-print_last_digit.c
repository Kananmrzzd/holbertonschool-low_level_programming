#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: the integer
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{

	n = n > 0 ? n % 10 : -n % 10;

	_putchar(n + '0');
	return (n);
}
