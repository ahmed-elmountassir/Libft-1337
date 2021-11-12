/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:39:50 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/11/11 11:55:46 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = malloc(sizeof(t_list));
	if (!ele)
		return (NULL);
	ele->content = content;
	ele->next = NULL;
	return (ele);
}
