#include <stdio.h>
/**
 *main - Prints all combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void) {
for (int i = 0; i < 10; i++)
{
for (int j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return 0;
}