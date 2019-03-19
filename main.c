#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char buffer[100];
	int i = 6;
	_printf("This is a string %c\n", 'h');
	_printf("This is also a sting\n");
	_puts("String li\"teral");
	_printf("That's a %s!\n", "penis");
	_printf("%s", _itoa(i, buffer, 10));
	return (0);
}
