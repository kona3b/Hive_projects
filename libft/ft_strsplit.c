/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:11:21 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/05 19:53:19 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	w;
	int		i;

	w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			w++;
		if (s[i] == '\0' && s[i - 1] != c)
			w++;
	}
	return (w);
}

static char	*ft_build_string(int i, const char *s, char c)
{
	char	*str;
	size_t	len;
	int		j;

	len = 0;
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	str = (char *) malloc((len + 1) * sizeof(*str));
	if (!str)
		return (0);
	i = i - (int)len;
	while (s[i] != c && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**arr;
	size_t	w;
	int		x;
	int		i;

	i = 0;
	x = 0;
	if (!s)
		return (0);
	w = ft_count_words(s, c);
	arr = (char **) malloc((w + 1) * sizeof(char *));
	if (!arr)
		return (0);
	while (w-- > 0)
	{
		while (s[i] == c)
			i++;
		arr[x] = ft_build_string(i, s, c);
		x++;
		while (s[i] != c)
			i++;
	}
	arr[x] = 0;
	return (arr);
}
