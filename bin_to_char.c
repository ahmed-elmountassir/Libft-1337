#include "libft.h"
int     binary_to_char(char *bin)
{
        int     ng;
        int     dec;
        int     i;

        ng = 1;
        if (bin[0] == '1')
                ng = -1;
        dec = 0;
        i = 1;
        while (bin[i])
        {
                dec = dec << 1 | bin[i] - 48;
                i++;
        }
        return (dec * ng);
}
