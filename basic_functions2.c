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

char *_reverse(char *buffer, int i, int j)
{
	while (i < j)
		_swap(&buffer[i++], &buffer[j--]);

	return buffer;
}

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}

char *_itoa(int value, char* buffer, int base)
{
	if (base < 2 || base > 32)
		return buffer;

	int n = _abs(value);

	int i = 0;
	while (n)
	{
		int r = n % base;

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

	return _reverse(buffer, 0, i - 1);
}
