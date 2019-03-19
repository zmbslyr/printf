#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list input;
	char *strPointer = (char *)format;
	int c, d, i;
	void *s;
	char buffer[1024];

	va_start(input, format);
	for (; *strPointer; strPointer++)
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
				_puts(_itoa(d, buffer, 10));
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
