#include "libft.h"

static int	ft_find_len(const char *s)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t') 
	{
		i--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = ft_find_len(s);
	str = (char *) malloc((len + 1) * sizeof(*str));
	if ((str - 1) == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
