#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list input;
	char *strPointer = (char *)format;
<<<<<<< HEAD
	int c;
	char *str;
=======
	int c, d;
	void *s;
>>>>>>> af6440d49c8283ef15a01c12a145ad3b6127df70

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
				write(1, &d, 1);
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
