#include "holberton.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns string 1 - string 2 or 0
 **/

int _strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - '0') - (s2[i] - '0'));
		}
		i++;
	}
	return (0);
}

/**
 * _reverse - reverses a string
 * @buffer: String to be reversed
 * @i: Start of the string
 * @j: End of the string
 *
 * Return: Reverse String
 */
char *_reverse(char *buffer, int i, int j)
{
	while (i < j)
		_swap(&buffer[i++], &buffer[j--]);

	return (buffer);
}

/**
 * _abs - Finds the absolute value of an integer
 * @n: Integer to find absolute value of
 *
 * Return: Absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}

/**
 * _itoa - Converts integer to string
 * @value: Number to be converted
 * @buffer: Place converted value is stored
 * @base: Base value is
 *
 * Return: character array of value
 */
char *_itoa(int value, char *buffer, int base)
{
	int n = _abs(value);
	int r;
	int i = 0;

	if (base < 2 || base > 32)
		return (buffer);
	while (n)
	{
		r = n % base;

		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;

		n = n / base;
	}

	if (i == 0)
		buffer[i++] = '0';

	if (value < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (_reverse(buffer, 0, i - 1));
}
