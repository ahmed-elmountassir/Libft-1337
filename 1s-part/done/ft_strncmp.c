/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:23:38 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/10 13:19:36 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *st1, char *st2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((st1[i] && st2[i]) && (st1[i] == st2[i]) && (i < size - 1))
		i++;
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}