/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:32:18 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/04 14:36:14 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		res = 1;
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
