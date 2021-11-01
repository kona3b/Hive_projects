/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:56:41 by kaittola          #+#    #+#             */
/*   Updated: 2021/10/28 14:43:09 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b);

int		main(void)
{
	int	i;
	int *a;
	int x;
	int *b;

	i = 13;
	a = &i;
	x = 42;
	b = &x;

	printf("Before the swap i = %d, x = %d\n", i, x);
	ft_swap(a, b);
	printf("After the swap i = %d, x = %d\n", i, x);
	return (0);
}
