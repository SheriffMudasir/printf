#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int process_format(va_list arg, char specifier);
int print_decimal(va_list arg);




#endif