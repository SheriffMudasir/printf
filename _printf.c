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
	int count = 0;

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
			count += process_format(arg, *format);
		}
		format++;
	}

	va_end(arg);
        
	return count;
}