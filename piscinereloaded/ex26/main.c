/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:23:20 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/04 13:04:47 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));

int	ft_check_if_d(char *str)
{
	if (str[0] == 'd')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	**tab = NULL;
	int	(*f)(char*);

	f = &ft_check_if_d;
	tab[0] = "dog";
	tab[1] = "odg";
	tab[2] = "dog";
	tab[3] = "god";
	tab[4] = "000";
	printf("%i", ft_count_if(tab, &ft_check_if_d));
	return (0);
}
