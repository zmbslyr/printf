#include "holberton.h"

/**
 * _switch - Switch statement for _printf
 * @strP: String to take in
 * @input: input from _printf
 *
 * Return: 0 (success)
 */
int _switch(char *strP, va_list input)
{
	char buffer[1024];
	int c, d, i;
	void *s;

	switch (*strP)
	{
	case 'c':
		c = va_arg(input, int);
		write(1, &c, 1);
		break;
	case 's':
		s = va_arg(input, char *);
		_puts(s);
		break;
	case 'd':
		d = va_arg(input, int);
		_puts(_itoa(d, buffer, 10));
		break;
	case 'i':
		i = va_arg(input, int);
		_puts(_itoa(i, buffer, 10));
		break;
	}
	return (0);
}

/**
 * _printf - prints a formatted string
 * @format: String to be formatted
 *
 * Return: Number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list input;
	char *strPointer = (char *)format;
	int  index, count = 0;
	int moduloNumber = 0;

	if (format == NULL)
		exit(42);
	va_start(input, format);
	for (; *strPointer; strPointer++)
	{
		if (*strPointer == '%')
		{
			moduloNumber++;
			strPointer++;
			_switch(strPointer, input);
		}
		else
		{
			write(1, strPointer, 1);
		}
	}
	va_end(input);
	for (index = 0; format[index]; index++)
		;
	return ((index + count + 1) - (2 * moduloNumber));
}
