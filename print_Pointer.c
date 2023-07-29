#include "main.h"

#include <stdio.h>

/**
 * print_pointer - Prints the value of a pointer variable
 * @types: List a of arguments
 * Return: Number of chars printed.
 */
int print_pointer(va_list types)
{
    void *addrs = va_arg(types, void *);
    if (addrs == NULL)
    {
        return (printf("(nil)"));
    }
    else
    {
        return (printf("%p", addrs));
    }
}
