/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:35:47 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/25 13:37:00 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	while (i <= len)
	{
		s[i] = '\0';
		i++;
	}
}
