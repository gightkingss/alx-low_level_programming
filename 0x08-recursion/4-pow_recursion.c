#include "main.h"
/**
 * __pow_recursion(int x, int y)-calculates x powered to y
 * @x:value
 * @y:power value
 * Return-the powered value
 */


int _pow_recursion(int x, int y)
{
if (y < 0)
{
return -1;
}
if (y == 0)
{
return 1;
}
return (x * _pow_recursion(x,y-1));
}