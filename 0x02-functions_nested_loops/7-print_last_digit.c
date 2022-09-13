#include "main.h"

/**
 * print_last_digit - Prints thelast digit of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last-digit(int n)
{
	int l;

	i = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
