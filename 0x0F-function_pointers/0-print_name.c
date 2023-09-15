#include "function_pointers.h"
#include <stdio.h>
/**
 * print _name(char *name, void (*f) (char *)-function pointer
 * @name:value from main code
 * @f:pointer
 * Return-nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
