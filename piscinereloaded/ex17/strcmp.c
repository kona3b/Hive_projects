int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	while (*s1 && *s2)
	{
		res = res + (*s1 + *s2);
		s1++;
		s2++;
	}
	return (res);
}
