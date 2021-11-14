#include "libft.h"

//--------------------------------------ft_striter
void func(unsigned int i, char *str)
{
    *str = ft_toupper(*str);
}
//--------------------------------------ft_strmapi
char *func(unsigned int i, char c)
{
    return (ft_toupper(c));
}
//--------------------------------------ft_lstiter

void function(char *str)
{
    int i = ft_atoi(str);
    printf("%d\n", i);
}

void    lstiter_test(void)
{
    t_list *node1 = ft_lstnew("1f");
    t_list *node2 = ft_lstnew("2s");
    t_list *node3 = ft_lstnew("3l");

    node1->next = node2;
    node2->next = node3;

    ft_lstiter(node1, function);
}
//--------------------------------------main