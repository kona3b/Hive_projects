/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:31:21 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/04 14:07:24 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstrerror("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstrerror("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	close(fd);
	ft_putstr(buf);
	return (0);
}
