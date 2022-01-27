#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;
	int		ret;

	i = 0;
	while (i < argc)
	{
		if (argc == 1)
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		while ((ret = get_next_line(fd, &line) == 1))
		{
			ft_putendl(line);
			free(line);
		}
		i++;
		close(fd);
	}
	return (0);
}
