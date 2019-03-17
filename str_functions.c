#include "holberton.h"

/**
 * charForm - Print a char out to the stdout
 * @c: Character to print out
 *
 * return: integer
 */
int charForm(char c)
{
	return (write(1, &c, 1));
}
