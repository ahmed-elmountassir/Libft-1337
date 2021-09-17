/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:44:24 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/17 12:46:44 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, int cara)
{
	int		i;
	char	*find;

	i = 0;
	while (*str)
	{
		if (*str == cara)
		{
			find = str;
		}
		str++;
	}
	return (find);
}