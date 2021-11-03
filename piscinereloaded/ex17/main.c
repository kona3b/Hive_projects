#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1 = "This is a string";
	char *s2 = "This is a strinf";
	int res1;
	int res2;

	res1 = strcmp(s1, s2);
	res2 = ft_strcmp(s1, s2);
	printf("%d, %d", res1, res2);
	return (0);
}
