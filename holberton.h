#ifndef PRINTF
#define PRINTF

#include <stdlib.h>

typedef struct ftoFunc
{
	char *form;
	(*f)((*fu)(char c));
} strTp

typedef struct strTp ftoFunc;
char charForm(int(*f)(char c));
int _putchar(char c);
int _printf(const char *format);
char *strForm(char *);
int modForm(int n);


#endif
