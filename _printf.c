#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - formatted output to stdout
 * @format: constant character pointer
 * Return: count
 */

/**
 * example: int _printf("Hello %d %j", -1)
 * printf("hello %%", Christian)
 * "hello Christian"
 *
 * "hello %"
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	int count = 0;
	va_list args;
	char c;

	f_t f_types[] = {
		{"c", print_char},
		{"i", print_int_i},
		{"d", print_int_d},
		{"%", print_percent},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args, format);
	while (*format)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			for (i = 0; format != NULL && format[i]; i++)
			{
				j = 0;
				for (j = 0; j < 5; j++)
				{
					if (format[i] == *f_types[j].id)
						count += f_types[j].f(args);
					else
					{
						i--;
						c = format[i];
						write(1, &c, 1);
						count++;
					}
				}
			}
		}
	}
	format++;
	va_end(args);
	printf("\n");
	return (count);
}