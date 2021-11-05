/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:22:20 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/05 13:15:47 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char const *src);
int		ft_strlen(char *str);
int		ft_strcmp(char const *s1, char const *s2);

#endif
