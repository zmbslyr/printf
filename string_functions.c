#include "hoblerton.h"

/**
 **/

char charForm (int (*f)(char c))
{
	int value;

	value = f(c);

	return(value);
}

/**
 **/

char strForm (int (*f)(char *))
{
	int value;

	value = f(*);
	return(value);
}
