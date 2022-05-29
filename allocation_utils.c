#include "libft.h"

void    free_td_arr(char **arr)
{
    size_t i = 0;
    while (arr[i])
        ft_free(arr[i++]);
    free(arr);
}

void    ft_free(char *str)
{
    if (str)
        free(str);
    str = NULL;
}