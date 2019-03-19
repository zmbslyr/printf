#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list input;
	char *strPointer = (char *)format;
	int c;
	char *str;

	va_start(input, format);
	for (;*strPointer; strPointer++)
	{
		if (*strPointer == '%')
		{
			strPointer++;
			switch (*strPointer)
			{
			case 'c':
				c = va_arg(input, int);
				write(1, &c, 1);
				break;
			}
		}
		else
		{
			write(1, strPointer, 1);
		}
	}
	va_end(input);
	return (0);
}
