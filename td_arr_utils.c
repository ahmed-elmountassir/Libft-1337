#include "libft.h"

size_t  td_arr_size(char **arr)
{
    size_t i = 0;;
    while (arr[i])
        i++;
    return(i);
}

void    print_td_arr(char **arr)
{
    size_t i = 0;
    while (arr[i])
        printf("%s\n", arr[i++]);
}

char    **append_to_arr(char **arr, char *append)
{
    size_t size = td_arr_size(arr);
    char **tmp = malloc(sizeof(char *) * size + 2);
    int i = 0;
    while (arr[i])
    {
        tmp[i] = ft_strdup(arr[i]);
        i++;
    }
    tmp[i] = ft_strdup(append);
    tmp[i + 1] = NULL;
    return (tmp);
}

char    **pop_index(char **arr, int index)
{
    size_t size = td_arr_size(arr);
    int i = 0;
    int j = 0;

    if (index < 0 || index > size)
        return(NULL);
    char **tmp = malloc(sizeof(char *) * size + 1);
    while (arr[i])
    {
        if (i != index)
        {
            tmp[j] = ft_strdup(arr[i]);
            j++;
        }
        i++;
    }
    tmp[i] = NULL;
    print_td_arr(tmp);
    return (tmp);
}