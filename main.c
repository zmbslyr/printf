#include "holberton.h"

/**
 * main - Entry point
 * @argc: Number of arguments given
 * @argv: Array of string values of arguments given
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
	{
		_printf(argv[1], argv[2]);
		return (1);
	}
        return (NULL);
}
