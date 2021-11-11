/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:39:34 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/11 14:29:12 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_find_len(int n)
{
	size_t	len;
	int		num;
	int		found;

	found = 0;
	len = 11;
	if (n == -2147483648)
		return (len + 1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	num = 1000000000;
	while (num > 9 && found == 0)
	{
		if (n < num)
		{
			num = num / 10;
			len--;
		}
		else
			found = 1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *) malloc(ft_find_len(n) * sizeof(*str));
	if ((str - 1) == NULL)
		return (NULL);
	return (str);
}
