/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:43:47 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/11/09 18:06:59 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    ft_lstlast(*lst)->next = new;
}