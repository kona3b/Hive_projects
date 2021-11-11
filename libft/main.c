/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:05:37 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/11 15:00:18 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "This is a string";
	char	*s2 = "This is a string";
	char	*s3 = "This is a strinddfdsf";
	char	*str = "-456789";
	int		nbr = 123456789;
	char	src[50], dest[50];
	char	source[] = "These two should be same";
	char	*target1 = strdup(source);
	char	*target2 = ft_strdup(source);
	char	first[] = "This is ";
	char	last[] = "a potentially long string";
	size_t	r;
	size_t	size = 16;
	char	buffer[size];

	strcpy(buffer,first);
	r = ft_strlcat(buffer, last, size);

	puts(buffer);
	printf("Value returned: %zu\n",r);
	if(r > size)
		puts("Testing strlcat: String truncated");
	else
		puts("Testing strlcat: String was fully copied");
	printf("Testing strdup %s\n", target1);
	printf("Testing ft_strdup %s\n", target2);
	ft_strcpy(src, "This is source");
	ft_strcpy(dest, "This is destination");

	ft_strncat(dest, src, 5);

	printf("Final destination string : |%s|\n", dest);
	ft_putstr("Testing ft_putnbr with min and max int\n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	printf("Testing strcmp and ft_strcmp with matching strings:\n%d, %d\n", strncmp(s1, s2, 10), ft_strncmp(s1, s2, 10));
	printf("Testing strcmp and ft_strcmp with different strings:\n%d, %d\n", strncmp(s1, s3, 10), ft_strncmp(s1, s3, 10));
	printf("Testing ft_atoi, the string is %s and the int is %i\n", str, ft_atoi(str));
	printf("Testing atoi, the string is %s and the int is %i\n", str, atoi(str));
	printf("Testing ft_itoa, the int is %i and the string is %s\n", nbr, ft_itoa(nbr));
	return (0);
}
