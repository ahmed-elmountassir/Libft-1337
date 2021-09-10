/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:13:13 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/09 20:55:33 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *st1, char *st2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (st2[i] && i < size)
	{
		st1[i] = st2[i];
		i++;
	}
	while (i < size)
	{
		st1[i] = '\0';
		i++;
	}
	
	return (st1);
}
