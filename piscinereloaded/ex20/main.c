/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:12:04 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/03 18:15:55 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *s1;

	s1 = "This is something!";
	printf("%s\n%s\n", ft_strdup(s1), strdup(s1));
	return (0);
}
