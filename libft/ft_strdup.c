/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:14:42 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/09 11:04:15 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	dst = (char *) malloc((i + 1) * sizeof(char));
	if ((dst - 1) == NULL)
		return (NULL);
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	return (dst);
}
