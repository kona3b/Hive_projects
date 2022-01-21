/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:55:59 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/16 14:58:43 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int    get_next_line(const int fd, char **line)
{
    int            bytes_read;
    char        buf[BUFF_SIZE + 1];
    char        *tmp;
    static char    *output[MAX_FD];

    if (fd < 0 || fd > MAX_FD || !line)
        return (-1);
    while (1)
    {
        bytes_read = read(fd, buf, BUFF_SIZE);
        if (bytes_read <= 0)
            break ;
        if (!output[fd])
            output[fd] = ft_strnew(BUFF_SIZE + 1);
        buf[bytes_read] = '\0';
        tmp = ft_strjoin(output[fd], buf);
        //ft_strdelfree(output[fd]);
        output[fd] = ft_strdup(tmp);
        if (ft_strchr(buf, '\n'))
            break ;
    }
    if (!output[fd])
            return (0);
    return (ft_output_handler(fd, line, output));
}

int    ft_output_handler(const int fd, char **line, char **output)
{
    int        i;
    char    *tmp;

    i = 0;
    while (output[fd][i] != '\n' && output[fd][i] != '\0')
        i++;
    if (i == 0)
        return (0);
    if (output[fd][i] == '\n')
    {
        *line = ft_strsub(output[fd], 0, i);
        tmp = ft_strdup(output[fd] + i + 1);
        output[fd] = ft_strdup(tmp);
        return (1);
    }
    else if (output[fd][i] == '\0')
    {
        *line = ft_strsub(output[fd], 0, (i + 1));
        //ft_strdel free(output[fd]);
        return (1);
    }
    else
        return (-1);
}
