/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:11:21 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/01 17:11:26 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	w;
	int	i;

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

static int	ft_find_len(int i, const char *s, char c)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_build_string(int i, const char *s, char c)
{
	char	*str;
	int		j;

	j = 0;
	str = (char *) malloc((ft_find_len(i, s, c) + 1) * sizeof(char));
	if (str - 1 == NULL)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**arr;
	int		w;
	int		x;
	int		i;

	i = 0;
	x = 0;
	if (!s)
		return (0);
	w = ft_count_words(s, c);
	arr = (char **) malloc((w + 1) * sizeof(char *));
	while (x < w)
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
