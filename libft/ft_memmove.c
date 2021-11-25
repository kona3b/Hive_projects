/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:35:29 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/25 13:37:11 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!ptr1 && !ptr2)
		return (0);
	if (ptr2 < ptr1)
	{
		while (i++ < len)
			ptr1[i] = ptr2[i];
	}
	else
	{
		while (len-- > 0)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dst);
}
