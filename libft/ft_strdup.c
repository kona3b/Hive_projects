/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:14:42 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/10 12:01:46 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[i])
	{
		len++;
		i++;
	}
	dst = (char *) malloc((i + 1) * sizeof(char));
	if ((dst - 1) == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
