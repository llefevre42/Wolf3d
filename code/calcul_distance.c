/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_distance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 02:56:04 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/09 16:40:29 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	hauteur_mur(t_tri *lst)
{
	double	start_x;
	double	start_y;
	double	dir_x;
	double	dir_y;
	double	plan_x;
	double	plan_y;
	double	time;
	double	p_time;
	double	screen_x;
	double	screen_y;
	int x;
	double	cam_x;
	double	ray_x;
	double	ray_y;
	double	rd_x;
	double	rd_y;
	int map_x;
	int	map_y;
	double	sd_x;
	double	sd_y;
	double	delta_d_x;
	double	delta_d_y;
	double	wall_distance;
	int step_x;
	int step_y;
	int hit;
	int side;
	int	line_h;
	int	draw_s;
	int draw_e;
	double rota;

	start_x = lst->start_x;
	start_y = lst->start_y;
	dir_x = lst->dir_x;
	dir_y = lst->dir_y;
	plan_x = lst->angle_p;
	plan_y = lst->angle_s;
	time = 0;
	p_time = 0;
	screen_x = 1200;
	screen_y = 800;
	x = 0;

	while(x < screen_x)
	{
		cam_x = 2 * x / (double)(screen_x) - 1;
		ray_x = start_x;
		ray_y = start_y;
		rd_x = dir_x + plan_x * cam_x;
		rd_y = dir_y + plan_y * cam_x;
		map_x = (int)(ray_x);
		map_y = (int)(ray_y);
		delta_d_x = sqrt(1 + (rd_y * rd_y) / (rd_x * rd_x));		//custom delete!!!
		delta_d_y = sqrt(1 + (rd_x * rd_x) / (rd_y * rd_y));
		hit = 0;
		if (rd_x < 0)
		{
			step_x = -1;
			sd_x = (ray_x - map_x) * delta_d_x;
		}
		else
		{
			step_x = 1;
			sd_x = (map_x + 1.0 - ray_x) * delta_d_x;
		}
		if (rd_y < 0)
		{
			step_y = -1;
			sd_y = (ray_y - map_y) * delta_d_y;
		}
		else
		{
			step_y = 1;
			sd_y = (map_y + 1.0 - ray_y) * delta_d_y;
		}
		while (hit == 0)
		{
			if (sd_x < sd_y)
			{
				sd_x += delta_d_x;
				map_x += step_x;
				side = 0;
			}
			else
			{
				sd_y += delta_d_y;
				map_y += step_y;
				side = 1;
			}
			if (lst->tab[map_x][map_y] > 0)
				hit = 1;
		}
		if (side == 0)
			wall_distance = (map_x - ray_x + (1 - step_x) / 2) /rd_x;
		else
			wall_distance = (map_y - ray_y + (1 - step_y) / 2) /rd_y;
		line_h = (int)(screen_y / wall_distance);
		draw_s = ((-line_h) / 2) + (screen_y / 2);
		if (draw_s < 0)
			draw_s = 0;
		draw_e = (line_h / 2) + (screen_y / 2);
		if (draw_e >= screen_y)
			draw_e = screen_y - 1;
		if(side == 0)
		{
			if (0 > map_x - start_x)
				lst->color = 0X167C0B;
			else
				lst->color = 0X530B61;
		}
		else
		{
			if (0 > map_y - start_y)
				lst->color = 0X6C2626; 
			else
				lst->color = 0X294064;
		}
		draw_line(x, draw_s, draw_e, lst);
		x++;
	}
}
