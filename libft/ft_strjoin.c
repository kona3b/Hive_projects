#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	j = 0;
	while (s1[i++] != '\0')
		len++;
	i = 0;
	while (s2[i++] != '\0')
		len++;
	i = 0;
	str = (char *) malloc((len + 1) * sizeof(*str));
	if ((str - 1) == NULL)
		return (NULL);
	while (s1[i] != '\0')
		str[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
