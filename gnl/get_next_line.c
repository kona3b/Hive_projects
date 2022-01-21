/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:16:48 by kaittola          #+#    #+#             */
/*   Updated: 2022/01/21 13:39:26 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_outputter(const int fd, char **line, char **output)
{
	int		i;
	char	*tmp;

	i = 0;
	while (output[fd][i] != '\n' && output[fd][i] != '\0')
		i++;
	if (i == 0)
		return (0);
	if (output[fd][i] == '\n')
	{
		*line = ft_strsub(output[fd], 0, i);
		tmp = ft_strdup(output[fd] + i + 1);
		ft_strdel(&output[fd]);
		output[fd] = ft_strdup(tmp);
		ft_strdel(&tmp);
		return (1);
	}
	else if (output[fd][i] == '\0')
	{
		*line = ft_strsub(output[fd], 0, (i + 1));
		ft_strdel(&output[fd]);
		return (1);
	}
	else
		return (-1);
}

static int	ft_reader(const int fd, char **line, char *tmp, char **output)
{
	int			read_ret;
	char		buf[BUFF_SIZE + 1];

	read_ret = 1;
	while (read_ret != 0)
	{
		read_ret = read(fd, buf, BUFF_SIZE);
		if (read_ret < 0)
			return (-1);
		buf[read_ret] = '\0';
		ft_strdel(&output[fd]);
		output[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
		tmp = ft_strdup(output[fd]);
		ft_bzero(buf, ft_strlen(buf));
		if (ft_strchr(output[fd], '\n'))
			break ;
	}
	ft_strdel(&tmp);
	return (ft_outputter(fd, line, output));
}

static int	ft_leftovers(const int fd, char **line, char *tmp, char **output)
{
	*line = ft_strsub(output[fd], 0, ft_count_c(output[fd], '\n'));
	ft_strdel(&output[fd]);
	if (ft_strlen(ft_strchr(tmp, '\n') + 1) > 0)
	{
		output[fd] = ft_strsub(tmp, ft_count_c(tmp, '\n') + 1,
				ft_strlen(ft_strchr(tmp, '\n') + 1));
	}
	ft_strdel(&tmp);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*output[FD_SIZE];
	char		*tmp;

	tmp = ft_strnew(BUFF_SIZE);
	if (fd < 0 || fd > FD_SIZE || !line || BUFF_SIZE == 0 || !tmp)
		return (-1);
	if (output[fd] != NULL)
	{
		tmp = ft_strdup(output[fd]);
		if (ft_strchr(output[fd], '\n'))
			return (ft_leftovers(fd, line, tmp, output));
		else
			return (ft_reader(fd, line, tmp, output));
	}
	return (ft_reader(fd, line, tmp, output));
}