/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:47:11 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/07 13:47:25 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*current;
	t_list	*lst_current;

	start = (*f)(lst);
	if (lst->next != NULL)
		start->next = (*f)(lst->next);
	else
		return (start);
	current = start->next;
	lst_current = lst->next;
	while (lst_current->next != NULL)
	{
		current->next = (*f)(lst_current->next);
		if (!current->next)
		{
			ft_lstdel(&start, &ft_bzero);
			return (NULL);
		}
		current = current->next;
		lst_current = lst_current->next;
	}
	current->next = NULL;
	return (start);
}
