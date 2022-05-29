/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:36:35 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/05/29 14:22:58 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*reverse_string(char *str)
{
	size_t	i;
	size_t	len;
	char swp;

	i = 0;
	len = ft_strlen(str);
	while (i < len/2)
	{
		swp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = swp;
		len--;
		i++;	
	}
	return (str);
}
