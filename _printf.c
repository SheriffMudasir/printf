#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - This is a custom printf function.
 * @format: Format string.
 *
 * Return: Number of characters printed excluding the null byte.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0, min, divide;

	va_start(arg, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arg, int));
					count++;
					break;
				case 's':
				{
					char *str = va_arg(arg, char *);
					if (str == NULL)
						str = "(null)";
					while (*str)
					{
						_putchar(*str);
						str++;
						count++;
					}
					break;
				}
				case 'd':
				case 'i':
				{
					int value = va_arg(arg, int);
					int num_of_digits = 0;

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
					break;
				}
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}
		}
		format++;
	}

	va_end(arg);

	return count;
}
