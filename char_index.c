#include "libft.h"

size_t char_index(char *str , char c)
{
    if (!str)
        return (-1);
    return (ft_strchr(str, c) - str);
}