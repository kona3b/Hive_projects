/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:14:51 by kaittola          #+#    #+#             */
/*   Updated: 2021/12/09 14:37:05 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	while ((i + 1) < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
