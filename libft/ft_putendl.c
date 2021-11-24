#include "libft.h"

static void	ft_putnl(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(const char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	ft_putnl('\n');
}
