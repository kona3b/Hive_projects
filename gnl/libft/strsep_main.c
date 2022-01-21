#include <stdio.h>
#include <string.h>

char	*ft_strsep(char **stringp, const char *delim);

int main()
{
    char *string,*found;

    string = strdup("Hello there, peasants!");
    printf("Original string: '%s'\n",string);
    while( (found = ft_strsep(&string," ")) != NULL )
        printf("%s\n",found);

    return(0);
}
