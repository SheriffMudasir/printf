#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * process_format - Process the format specifier.
 * @arg: Argument list.
 * @specifier: Format specifier.
 *
 * Return: Number of characters printed.
 */
int process_format(va_list arg, char specifier)
{
	int count = 0;

	switch (specifier)
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
			count += print_decimal(arg);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(specifier);
			count += 2;
			break;
	}
	return (count);
}
