/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:19:38 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/11/09 18:25:59 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *chest;
    t_list  *tmp;
    
    chest = *lst;
    while (chest)
    {
        tmp = chest;
        chest = chest->next;
        ft_lstdelone(tmp, del);
    }
    (*lst) = NULL;
}