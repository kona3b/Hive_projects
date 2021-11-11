/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:17:20 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/11 14:46:51 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_find_str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	j = 0;
	d = ft_find_str_len(s1);
	s = ft_find_str_len(s2);
	i = d;
	while (s2[j] != '\0' && i < (n - 1))
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s + d);
}
