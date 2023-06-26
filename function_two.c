#include <stdarg.h>
#include "main.h"

/**
 * print_decimal - Print a decimal integer.
 * @arg: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_decimal(va_list arg)
{
	int value = va_arg(arg, int);
	int count = 0, min, divide, num_of_digits = 0;

	if (value == 0)
	{
		_putchar('0');
		count++;
	}
	else if (value < 0)
	{
		_putchar('-');
		count++;
		value = -value;
	}
	min = value;
	while (min != 0)
	{
		min /= 10;
		num_of_digits++;
	}
	divide = 1;
	while (--num_of_digits > 0)
		divide *= 10;

	while (divide != 0)
	{
		_putchar((value / divide) + '0');
		count++;
		value %= divide;
		divide /= 10;
	}

	return count;
}