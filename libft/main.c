/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:05:37 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/18 16:38:43 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
	char	*s1 = "This is a string";
	char	*s2 = "This is a string";
	char	*s3 = "This is a strinddfdsf";
	char	*s4 = "str";
	char	*str = "-456789";
	int		nbr = -2147483648;
	char	src[50], dest[50];
	char	source[] = "These two should be same";
	char	*target1 = strdup(source);
	char	*target2 = ft_strdup(source);
	char	first[] = "This is ";
	char	last[] = "a potentially long string";
	size_t	r;
	size_t	size = 16;
	char	buffer[size];
	char	ch = 's';
	char	c;

	strcpy(buffer,first);
	r = ft_strlcat(buffer, last, size);
	puts(buffer);
	printf("Value returned: %zu\n",r);
	if(r > size)
		puts("Testing strlcat: String truncated");
	else
		puts("Testing strlcat: String was fully copied");
	printf("Testing strdup %s\n", target1);
	printf("Testing ft_strdup %s\n", target2);
	ft_strcpy(src, "This is source");
	ft_strcpy(dest, "This is destination");
	ft_strncat(dest, src, 5);
	printf("Final destination string : |%s|\n", dest);
	ft_putstr("Testing ft_putnbr with min and max int\n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	printf("Testing strcmp and ft_strcmp with matching strings:\n%d, %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("Testing strncmp and ft_strncmp with different strings:\n%d, %d\n", strncmp(s1, s3, 16), ft_strncmp(s1, s3, 16));	
	printf("Testing ft_strequ with matching strings: %d\n", ft_strequ(s1, s2));
	printf("Testing ft_strequ with different strings: %d\n", ft_strnequ(s1, s3, 16));
	printf("Testing ft_atoi, the string is %s and the int is %i\n", str, ft_atoi(str));
	printf("Testing atoi, the string is %s and the int is %i\n", str, atoi(str));
	printf("Testing ft_itoa, the int is %i and the string is %s\n", nbr, ft_itoa(nbr));
	printf("String after using ft_strchr searching for |%c| is |%s|\n", ch, ft_strchr(source, ch));
	printf("String after using ft_strrchr searching for |%c| is |%s|\n", ch, ft_strrchr(source, ch));
	printf("Testing ft_strstr, found string is |%s|\n", ft_strstr(s1, s4));
	printf("Testing strstr, found string is |%s|\n", strstr(s1, s4));
	printf("Testing ft_strnstr, found string is |%s|\n", ft_strnstr(s1, s4, 12));
	printf("Testing strnstr, found string is |%s|\n", strnstr(s1, s4, 12));
	c = 'Q';
	printf("Result of isalpha when c is %c: %d\n", c, isalpha(c));
	printf("Result of ft_isalpha when c is %c: %d\n", c, ft_isalpha(c));
	printf("Result of isalnum when c is %c: %d\n", c, isalnum(c));
	printf("Result of ft_isalnum when c is %c: %d\n", c, ft_isalnum(c));
	printf("Result of isascii when c is %c: %d\n", c, isascii(c));
	printf("Result of ft_isascii when c is %c: %d\n", c, ft_isascii(c));
	c = 'q';
	printf("Result of isalpha when c is %c: %d\n", c, isalpha(c));
	printf("Result of ft_isalpha when c is %c: %d\n", c, ft_isalpha(c));
	printf("Result of isalnum when c is %c: %d\n", c, isalnum(c));
	printf("Result of ft_isalnum when c is %c: %d\n", c, ft_isalnum(c));
	printf("Result of isascii when c is %c: %d\n", c, isascii(c));
	printf("Result of ft_isascii when c is %c: %d\n", c, ft_isascii(c));
	printf("Result of isprint when c is %c: %d\n", c, isprint(c));
	printf("Result of ft_isprint when c is %c: %d\n", c, ft_isprint(c));
	c = '5';
	printf("Result of isalpha when c is %c: %d\n", c, isalpha(c));
	printf("Result of ft_isalpha when c is %c: %d\n", c, ft_isalpha(c));
	printf("Result of isdigit when c is %c: %d\n", c, isdigit(c));
	printf("Result of ft_isdigit when c is %c: %d\n", c, ft_isdigit(c));
	printf("Result of isalnum when c is %c: %d\n", c, isalnum(c));
	printf("Result of ft_isalnum when c is %c: %d\n", c, ft_isalnum(c));
	printf("Result of isascii when c is %c: %d\n", c, isascii(c));
	printf("Result of ft_isascii when c is %c: %d\n", c, ft_isascii(c));
	printf("Result of isprint when c is %c: %d\n", c, isprint(c));
	printf("Result of ft_isprint when c is %c: %d\n", c, ft_isprint(c));
	c = '!';
	printf("Result of isdigit when c is %c: %d\n", c, isdigit(c));
	printf("Result of ft_isdigit when c is %c: %d\n", c, ft_isdigit(c));
	printf("Result of isalnum when c is %c: %d\n", c, isalnum(c));
	printf("Result of ft_isalnum when c is %c: %d\n", c, ft_isalnum(c));
	printf("Result of isascii when c is %c: %d\n", c, isascii(c));
	printf("Result of ft_isascii when c is %c: %d\n", c, ft_isascii(c));
	printf("Result of isprint when c is %c: %d\n", c, isprint(c));
	printf("Result of ft_isprint when c is %c: %d\n", c, ft_isprint(c));
	c = '\n';
	printf("Result of isdigit when c is newline: %d\n", isdigit(c));
	printf("Result of ft_isdigit when c is newline: %d\n", ft_isdigit(c));
	printf("Result of isalnum when c is newline: %d\n", isalnum(c));
	printf("Result of ft_isalnum when c is newline: %d\n", ft_isalnum(c));
	printf("Result of isascii when c is newline: %d\n", isascii(c));
	printf("Result of ft_isascii when c is newline: %d\n", ft_isascii(c));
	printf("Result of isprint when c is newline: %d\n", isprint(c));
	printf("Result of ft_isprint when c is newline: %d\n", ft_isprint(c));
	c = 0x80;
	printf("Result of isdigit when c is %c: %d\n", c, isdigit(c));
	printf("Result of ft_isdigit when c is %c: %d\n", c, ft_isdigit(c));
	printf("Result of isalnum when c is %c: %d\n", c, isalnum(c));
	printf("Result of ft_isalnum when c is %c: %d\n", c, ft_isalnum(c));
	printf("Result of isascii when c is %c: %d\n", c, isascii(c));
	printf("Result of ft_isascii when c is %c: %d\n", c, ft_isascii(c));
	c = 'A';
	printf("Result of toupper when c is: %c: %c\n", c, toupper(c));
	printf("Result of ft_toupper when c is: %c: %c\n", c, ft_toupper(c));
	printf("Result of tolower when c is: %c: %c\n", c, tolower(c));
	printf("Result of ft_tolower when c is: %c: %c\n", c, ft_tolower(c));	
	c = 'a';
	printf("Result of toupper when c is: %c: %c\n", c, toupper(c));
	printf("Result of ft_toupper when c is: %c: %c\n", c, ft_toupper(c));
	printf("Result of tolower when c is: %c: %c\n", c, tolower(c));
	printf("Result of ft_tolower when c is: %c: %c\n", c, ft_tolower(c));
	ft_putendl("This should be printed, followed by a new line");
	printf("%s\n", ft_strtrim("       This was trimmed with ft_strtrim  \t  "));
	printf("%s\n", ft_strjoin(s1, str));
	printf("%s\n", ft_strsub("This is a test string", 10, 4));
	char str6[50];
	strcpy(str6,"This is string.h library function");
	printf("%s\n", str6);
	memset(str6, '$', 7);
	printf("%s\n", str6);
	ft_memset(str6, '$', 10);
	printf("%s\n", str6);
	const char src7[50] = "This to be copied";
	char dest7[50] = "This to be replaced";
	printf("Before memcpy dest = %s\n", dest7);
	memcpy(dest7, src7, strlen(src7)+1);
	printf("After memcpy dest = %s\n", dest7);	
	strcpy(dest7, "This to be replaced");
	printf("Before ft_memcpy dest = %s\n", dest7);
	ft_memcpy(dest7, src7, strlen(src7)+1);
	printf("After ft_memcpy dest = %s\n", dest7);
	char string1[60] = "Taj Mahal is a historic monument in India.";
	char buffer2[61];
	char *pdest2;
	printf("Function: ft_memccpy 42 characters or to character 'c'\n");
	printf("Source: %s\n", string1);
	pdest2 = ft_memccpy(buffer2, string1, 'c', 42);
	*pdest2 = '\0';
	printf("Result: %s\n", buffer2);
	printf("Length: %lu characters\n", strlen(buffer2));
	char dest8[] = "oldstring";
	const char src8[]  = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest8, src8);
	memmove(dest8, src8, 9);
	printf("After memmove dest = %s, src = %s\n", dest8, src8);
	char dest9[] = "oldstring";
	const char src9[]  = "newstring";
	printf("Before ft_memmove dest = %s, src = %s\n", dest9, src9);
	ft_memmove(dest9, src9, 9);
	printf("After ft_memmove dest = %s, src = %s\n", dest9, src9);
	const char str10[] = "http://www.tutorialspoint.com";
	const char ch10 = '.';
	char *ret10;
	ret10 = ft_memchr(str10, ch10, strlen(str10));
	printf("String after |%c| is - |%s|\n", ch10, ret10);
	char str11[15];
	char str12[15];
	int ret11;
	memcpy(str11, "abcdef", 6);
	memcpy(str12, "abcdef", 6);
	ret11 = ft_memcmp(str11, str12, 5);
	if (ret11 > 0)
		printf("str12 is less than str11\n");
	else if (ret11 < 0)
		printf("str11 is less than str12\n");
	else
	   printf("str11 is equal to str12\n");
	printf("%i\n", ret11);
	return (0);
}
