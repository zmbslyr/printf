#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - returns the length of the string
 *@s: characters in string
 * Return: returns length of string
 **/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}

/**
 * _strcpy - copies a string to a destination
 * @dest: destination of string
 * @src: source string to copy
 * Return: points to the destination
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _puts - places a string followed by a new line
 * @str: string needed to be printed
 *
 **/

void _puts(char *str)
{
	int i;
	char x;

	for (i = 0; str[i] != 0; i++)
	{
		x = str[i];
		_putchar(x);
	}
}

/**
 * _swap - swaps places of integers
 * @a: first integer
 * @b: second integer
 *
 **/

void _swap(char *a, char *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
