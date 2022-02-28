/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   beta_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:09:05 by jniemine          #+#    #+#             */
/*   Updated: 2021/11/24 20:53:41 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	nb_length(long int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		++n;
	if (nb == 0)
		return (1);
	while (nb)
	{
		++n;
		nb /= 10;
	}
	return (n);
}

static void	digit(char **a, long int nb, int len)
{
	int	n;

	n = 0;
	*(*a + len--) = '\0';
	while (len >= 0)
	{
		n = nb - ((nb / 10) * 10);
		nb /= 10;
		*(*a + len--) = n + '0';
	}	
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long int	l_n;

	l_n = n;
	len = nb_length(n);
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		l_n *= -1;
		res[0] = '-';
		++res;
		digit(&res, l_n, --len);
		return (res - 1);
	}
	digit(&res, l_n, len);
	return (res);
}
