#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (i <= len)
	{
		s[i] = '\0';
		i++;
	}
}
