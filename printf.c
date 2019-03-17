#include "holberon.h"

int _printf(const char *format, ...)
{
	va_list input;

	va_start(input, format);

	getForm(format);

	va_end(input);
}
