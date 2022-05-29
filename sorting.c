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

void		sort_strings_arr(char **tab)
{
    int		i;
    int		j;
    char	*tmp;
    int     size = td_arr_size(tab);
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_strcmp(tab[i], tab[j] ) > 0)
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
