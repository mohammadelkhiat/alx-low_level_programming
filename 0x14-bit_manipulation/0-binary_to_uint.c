#include "main.h"

/**
 * binary to unit - main functuions
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int dec = 0;
    int i;

    if (b == NULL)
    {
        return (0);
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
    dec = ((dec << 1) | (b[i] - '0'));
    }

    return (dec);
}