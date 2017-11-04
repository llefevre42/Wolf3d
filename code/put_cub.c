/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_cub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 03:53:48 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/31 23:11:41 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		put_cub(t_tri *lst)
{
	long int x1;
	long int x;
	long int y;
	long int y1;

	x = lst->x;
	y = lst->y;
	y1 = y;
	x1 = x;
	while (y < y1 + lst->lon)
	{
		x = x1;
		while (x < x1 + lst->lon)
		{
			lst->img[x + ((y - 1) * 1200)] = lst->color;
			x++;
		}
		y++;
	}
	return (0);
}

int		put_cub_bis(int x, int y, t_tri *lst)
{
	int x1;
	int y1;

	y1 = y;
	x1 = x;
	while (y < y1 + lst->h)
	{
		x = x1;
		while (x < x1 + lst->l)
		{
			mlx_pixel_put(lst->mlx, lst->win, x, y, lst->color);
			x++;
		}
		y++;
	}
	return (0);
}

void	draw_line(int x, int start, int end, t_tri *lst)
{
	while(start < end)
	{
		lst->img[x + ((start - 1) * 1200)] = lst->color;
		start++;
	}
}

void	put_in_black(t_tri *lst)
{
	long int	i;
	long int end;
	end = 1200 * 800;
	i = 0;
	while (i < end - 10)
	{
		lst->img[i] = 0X000000;
		lst->img[i + 1] = 0X000000;
		lst->img[i + 2] = 0X000000;
		lst->img[i + 3] = 0X000000;
		lst->img[i + 4] = 0X000000;
		lst->img[i + 5] = 0X000000;
		lst->img[i + 6] = 0X000000;
		lst->img[i + 7] = 0X000000;
		lst->img[i + 8] = 0X000000;
		lst->img[i + 9] = 0X000000;
		i += 10;
	}
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
}
