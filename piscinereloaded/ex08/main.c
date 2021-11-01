/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:20:19 by kaittola          #+#    #+#             */
/*   Updated: 2021/10/28 12:48:58 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int	n;

	n = -2;
	ft_is_negative(n);
	return(0);
}
