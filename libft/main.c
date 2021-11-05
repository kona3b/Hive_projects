/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:05:37 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/05 15:38:13 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*s1 = "This is a string";
	char	*s2 = "This is a string";
	char	*s3 = "This is a strinddfdsf";

	ft_putstr("Testing ft_putnbr with min and max int\n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	printf("Testing strcmp and ft_strcmp with matching strings:\n%d, %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("Testing strcmp and ft_strcmp with different strings:\n%d, %d\n", strcmp(s1, s3), ft_strcmp(s1, s3));
	return (0);
}
