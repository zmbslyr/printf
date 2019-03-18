#include "holberton.h"

/**
 * charForm - Print a char out to the stdout
 * @c: Character to print out
 *
 * return: integer
 */
int charForm(va_list c)
{
	write(1, &c, 1);
	return (0);
}
