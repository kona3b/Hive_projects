/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:00:08 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/03 19:26:11 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	r;
	int	*range;

	if (min >= max)
		return (NULL);
	else
	{
		i = 0;
		r = max - min;
		range = malloc(sizeof(int) * (r + 2));
		while (i <= r)
		{
			range[i] = (min + i);
			i++;
		}
	}
	return (range);
}
