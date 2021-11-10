/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:56:09 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/11/09 18:02:17 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list  *node;
    
    if (!*lst)
        *lst = new;
    else
    {
        node = *lst;
        *lst = new;
        (*lst)->next = node;
    }
}
