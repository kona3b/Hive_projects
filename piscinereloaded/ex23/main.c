/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:46:02 by kaittola          #+#    #+#             */
/*   Updated: 2021/11/03 19:48:45 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0);
}
