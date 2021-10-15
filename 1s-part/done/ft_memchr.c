/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 04:04:34 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/10/15 04:12:27 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *memchr(const void *str, int c, size_t n)
{
    unsigned int    i;
    char            *s;

    i = 0;
    s = (char *)str;

    while(n--)
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (NULL);
}