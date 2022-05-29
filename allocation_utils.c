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

void    ft_error(char *str, char *arg)
{
    write(2, str, ft_strlen(str));
    if (arg)
        write(2, arg, ft_strlen(arg));
    write(2, "\n", 1);
    kill(0, SIGINT);
    exit(1);
}