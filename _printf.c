#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - formatted output to stdout
 * @format: constant character pointer
 * Return: count
 */

int _printf(const char *format, ...)
{
	int j;
	int count = 0;
	va_list args;

	f_t f_types[] = {{"c", print_char}, {"i", print_int_i}, {"d", print_int_d},
					{"%", print_percent}, {"s", print_str}, {NULL, print_null}};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			for (j = 0; j < 5; j++)
			{
				if (*format == *f_types[j].id)
				{
					count += f_types[j].f(args);
					break;
				}
			}
			if (j == 5)
			{
				format--;
				count += print_percent(args);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
