#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
int x;
for (x = n; x <= 98; x++)
{
printf("%d",x);
if (x != 98)
{
printf(", ");
}
}
_putchar('\n');
}
