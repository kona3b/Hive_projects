/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:56:41 by kaittola          #+#    #+#             */
/*   Updated: 2021/10/28 14:17:50 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr);

int		main(void)
{
	int	a;
	int *b;

	a = 1;
	b = &a;

	printf("%d\n", a);
	ft_ft(b);
	printf("%d\n", a);
	return (0);
}
