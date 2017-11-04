/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 03:44:42 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/09 18:22:09 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	what_a_cub(t_tri *lst)
{
	if(lst->egal == 2)
		lst->color = 0XFF0000;
	else if(lst->egal == 1)
		lst->color = 0XFFFFFF;
	else if(lst->egal == 11)
		lst->color = 0X0000FF;
	else if(lst->egal == 5)
	{
		lst->color = 0XFF00FF;
	}
	else
		lst->color = 0X000000;
//	put_cub(lst);
}	
