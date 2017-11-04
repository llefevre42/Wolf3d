/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_mousse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:18:51 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 17:36:40 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		put_mousse(int keycode, int x, int y, void *param)
{
	t_tri	*lst;

	lst = ((t_tri *)param);
	printf("mousse %d (%d:%d)\n", keycode, x, y);
	lst->modif = 0;
	if (keycode == 5)
	{
		lst->zoom -= 5;
	}
	else if (keycode == 4)
	{
		lst->zoom += 5;
	}
	if ((x >= 0 && x <= 100) && (y >= 0 && y <= 100))
	{
		lst->blk = 1;
		lst->spe = 0;
		lst->p_v = 0;
	}
	if ((x >= 100 && x <= 200) && (y >= 0 && y <= 100))
	{
		lst->blk = 0;
		lst->spe = 0;
		lst->p_v = 0;
	}
	if ((x >= 0 && x <= 100) && (y >= 200 && y <= 300))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 1;
	}
	if ((x >= 100 && x <= 200) && (y >= 200 && y <= 300))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 2;
	}
	if ((x >= 0 && x <= 100) && (y >= 300 && y <= 400))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 3;
	}
	if ((x >= 100 && x <= 200) && (y >= 300 && y <= 400))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 4;
	}
	if ((x >= 0 && x <= 100) && (y >= 400 && y <= 500))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 5;
	}
	if ((x >= 100 && x <= 200) && (y >= 400 && y <= 500))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 6;
	}
	if ((x >= 0 && x <= 100) && (y >= 100 && y <= 200))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 7;	
	}
	if ((x >= 100 && x <= 200) && (y >= 100 && y <= 200))
	{
		lst->blk = 0;
		lst->spe = 1;
		lst->p_v = 8;	
	}
	if(x > 200 && x < 1400 && y > 0 && y < 800)
	{
		lst->modif =1;
		lst->p_x = x - 200;
		lst->p_y = y;
	}
	serious(lst);
	/*	if ((x >= 255 && x <= 305) && (y >= 170 && y <= 220))
		{
		lst->blk = 19;
		lst->color = 0XFF0000;
		}
		*/	return (0);
}
