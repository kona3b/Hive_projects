/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:59:34 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/03 19:24:24 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *intresult;
	int i;
	int min;
	int max;

	min = -15;
	max = 50;
	i = 0;
	intresult = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%i\n", intresult[i]);
		i++;
	}
	return (0);
}
