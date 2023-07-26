#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - print anything
 * @format: constant
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list args;

	f_t f_types[] = {
		{"c", print_char},
		{"i", print_int_i},
		{"d", print_int_d},
		{"f", print_f},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 5)
		{
			if (format[i] == *f_types[j].id)
			{
				f_types[j].f(args);
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");

	return (0);
}
