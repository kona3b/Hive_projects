/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:47:30 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/09 14:31:17 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list *) malloc(sizeof(t_list));
	if (!newlink)
		return (NULL);
	if (content == NULL)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
		newlink->next = NULL;
		return (newlink);
	}
	else
	{
		newlink->content = ft_memalloc(content_size);
		if (!newlink->content)
		{
			free(newlink);
			return (NULL);
		}
		ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
		newlink->next = NULL;
		return (newlink);
	}
}
