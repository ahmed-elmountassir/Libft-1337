#include "libft.h"

void		sort_ints_tab(int *tab)
{
    int		i;
    int		j;
    int		tmp;
    int     size = sizeof(tab) / 4;
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

