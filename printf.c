#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list input;
	char *strPointer = (char *)format;
	int c, d, index, count = 0;
	void *s;
	char buffer[1024];
	int moduloNumber = 0;

	va_start(input, format);
	for (; *strPointer; strPointer++)
	{
		if (*strPointer == '%')
		{
			moduloNumber++;
			strPointer++;
			switch (*strPointer)
			{
			case 'c':
				c = va_arg(input, int);
				count = write(1, &c, 1);
				break;
			case 's':
				s = va_arg(input, char *);
				_puts(s);
				count = _strlen(s);
				break;
			case 'd':
				d = va_arg(input, int);
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
	for (index = 0; format[index]; index++)
		;
	return ((index + count + 1) - (2 * moduloNumber));
}
