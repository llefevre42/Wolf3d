/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_player.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 05:58:50 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/03 09:40:43 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	p_player(int key, t_tri *lst)
{
	if ((lst->ray == 23 || lst->ray == 0 || lst->ray == 1) && key == 126)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x -= SPEED;
	if ((lst->ray == 23 || lst->ray == 0 || lst->ray == 1) && key == 125)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x += SPEED;
	if ((lst->ray == 23 || lst->ray == 0 || lst->ray == 1) && key == 124)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y + SPEED)] != 1)
			lst->start_y += SPEED;
	if ((lst->ray == 23 || lst->ray == 0 || lst->ray == 1) && key == 123)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y - SPEED)] != 1)
			lst->start_y -= SPEED;
	if ((lst->ray == 2 || lst->ray == 3 || lst->ray == 4) && key == 126)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 2 || lst->ray == 3 || lst->ray == 4) && key == 125)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 2 || lst->ray == 3 || lst->ray == 4) && key == 124)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 2 || lst->ray == 3 || lst->ray == 4) && key == 123)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 5 || lst->ray == 6 || lst->ray == 7) && key == 126)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y + SPEED)] != 1)
			lst->start_y += SPEED;
	if ((lst->ray == 5 || lst->ray == 6 || lst->ray == 7) && key == 125)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y - SPEED)] != 1)
			lst->start_y -= SPEED;
	if ((lst->ray == 5 || lst->ray == 6 || lst->ray == 7) && key == 124)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x += SPEED;
	if ((lst->ray == 5 || lst->ray == 6 || lst->ray == 7) && key == 123)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x -= SPEED;
	if ((lst->ray == 8 || lst->ray == 9 || lst->ray == 10) && key == 126)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 8 || lst->ray == 9 || lst->ray == 10) && key == 125)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 8 || lst->ray == 9 || lst->ray == 10) && key == 124)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 8 || lst->ray == 9 || lst->ray == 10) && key == 123)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 11 || lst->ray == 12 || lst->ray == 13) && key == 126)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x += SPEED;
	if ((lst->ray == 11 || lst->ray == 12 || lst->ray == 13) && key == 125)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x -= SPEED;
	if ((lst->ray == 11 || lst->ray == 12 || lst->ray == 13) && key == 124)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y - SPEED)] != 1)
			lst->start_y -= SPEED;
	if ((lst->ray == 11 || lst->ray == 12 || lst->ray == 13) && key == 123)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y + SPEED)] != 1)
			lst->start_y += SPEED;
	if ((lst->ray == 14 || lst->ray == 15 || lst->ray == 16) && key == 126)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 14 || lst->ray == 15 || lst->ray == 16) && key == 125)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 14 || lst->ray == 15 || lst->ray == 16) && key == 124)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 14 || lst->ray == 15 || lst->ray == 16) && key == 123)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 17 || lst->ray == 18 || lst->ray == 19) && key == 126)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y - SPEED)] != 1)
			lst->start_y -= SPEED;
	if ((lst->ray == 17 || lst->ray == 18 || lst->ray == 19) && key == 125)
		if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y + SPEED)] != 1)
			lst->start_y += SPEED;
	if ((lst->ray == 17 || lst->ray == 18 || lst->ray == 19) && key == 124)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x -= SPEED;
	if ((lst->ray == 17 || lst->ray == 18 || lst->ray == 19) && key == 123)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y)] != 1)
			lst->start_x += SPEED;
	if ((lst->ray == 20 || lst->ray == 21 || lst->ray == 22) && key == 126)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y -= SPEED;
		}
	if ((lst->ray == 20 || lst->ray == 21 || lst->ray == 22) && key == 125)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 20 || lst->ray == 21 || lst->ray == 22) && key == 124)
		if(lst->tab[(int)(lst->start_x - SPEED)][(int)(lst->start_y + SPEED)] != 1)
		{
			lst->start_x -= SPEED;
			lst->start_y += SPEED;
		}
	if ((lst->ray == 20 || lst->ray == 21 || lst->ray == 22) && key == 123)
		if(lst->tab[(int)(lst->start_x + SPEED)][(int)(lst->start_y - SPEED)] != 1)
		{
			lst->start_x += SPEED;
			lst->start_y -= SPEED;
		}
}
