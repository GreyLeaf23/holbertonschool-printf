#include "main.h"

/**
 * print_char - print a character.
 * @format: Datatype.
 * @args: parameters.
 *
 * Return: count.
 */

int print_char(va_list args)
{
int count = 0;

char c = va_arg(args, int);
write (1, &c, 1);
count++;
return (count);
}

/**
 * print_int_d - print a signed integer.
 * @format: Datatype.
 * @args: parameters.
 *
 * Return: Count.
 */

int print_int_d(va_list args)
{
int count = 0;

char num_str[12];
int len = 0, i, num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
		count++;
	}

	while (num != 0)
	{
		num_str[len++] = num % 10 + '0';
		num /= 10;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(num_str[i]);
	}

return (count);
}

/**
 * print_int_i - print a unsigned integer.
 * @format: Datatypes.
 * @args: Parameters.
 *
 * Return: Count.
 */

int print_int_i(va_list args)
{
int count = 0;


char num_str[12];
int len = 0, i, num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
	}

	if (num < 0)
	{
		putchar('-');
		count++;
		num = -num;
		count++;
	}

	while (num != 0)
	{
		num_str[len++] = num % 10 + '0';
		num /= 10;
	}

	for (i = len - 1; i >= 0; i--)
	{
		 putchar(num_str[i]);
	}

count++;
return (count);
}

/**
 * print_percent - print a percent sign.
 * @format: Datatypes.
 * @args: Parameters
 *
 * Return: Count.
 */

int print_percent(va_list args)
{
int count = 0;

char c = va_arg(args, int);
write(1, &c, 1);
count++;
return (count);
}

/**
 * print_str - print a string.
 * @format: Datatype.
 * @args: Parameters.
 *
 * Return: Count.
 */

int print_str(va_list args)
{
int count = 0;

char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		count += putchar(*str++);
	}

count++;
return (count);
}
