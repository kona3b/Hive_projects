#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!ptr1 && !ptr2)
		return (0);
	if (ptr2 < ptr1)
	{
		while (i < len)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			ptr1[i] = ptr2[i];
			i++;
			len--;
		}
	}
	return (dst);
}
