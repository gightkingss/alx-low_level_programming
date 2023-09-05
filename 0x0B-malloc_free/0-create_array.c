#include "main.h"
#include <stdlib.h>
/**
 * create_array(unsigned int size, char c)-creates an array of size size with characters c
 * @size:size of the array
 * @c:character being used
 * Return:return the array
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return NULL;
    }

    char *char_array = (char *)malloc(sizeof(char) * size);

    if (char_array == NULL)
    {
        return NULL;
    }
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        char_array[i] = c;
    }

    return char_array;
}
