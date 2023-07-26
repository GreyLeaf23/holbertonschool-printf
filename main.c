#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - print anything
 * @format: constant
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int count = 0;
	va_list args;

	f_t f_types[] = {
		{"c", print_char},
		{"i", print_int_i},
		{"d", print_int_d},
		{"%", print_percent},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args, format);

	if (format[i] != "%")
	{
		write(1, &format[i], 1);
		count++;
	}

	else
	{
		while (format != NULL && format[i])
		{
			j = 0;

			while (j < 5)
			{
				if (format[i] == *f_types[j].id)
				{
					count += f_types[j].f(args);
				}
				j++;
			}
			i++;
		}
	}
	va_end(args);
	printf("\n");

	return (count);
}
