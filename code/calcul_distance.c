/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_distance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 02:56:04 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 14:24:31 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	hauteur_mur(t_tri *lst)
{
	t_prit t;
	t.start_x = lst->start_x;
	t.start_y = lst->start_y;
	printf("%f %f\n", lst->start_x, lst->start_y);
	t.dir_x = lst->dir_x;
	t.dir_y = lst->dir_y;
	t.plan_x = lst->angle_p;
	t.plan_y = lst->angle_s;
	t.time = 0;
	t.p_time = 0;
	t.screen_x = 1200;
	t.screen_y = 800;
	t.x = 0;
	lst->lon = 1;
	while(t.x < t.screen_x)
	{
		t.y = 0;
		t.cam_x = 2 * t.x / (double)(t.screen_x) - 1;
		t.ray_x = t.start_x;
		t.ray_y = t.start_y;
		t.rd_x = t.dir_x + t.plan_x * t.cam_x;
		t.rd_y = t.dir_y + t.plan_y * t.cam_x;
		t.map_x = (int)(t.ray_x);
		t.map_y = (int)(t.ray_y);
		t.delta_d_x = sqrt(1 + (t.rd_y * t.rd_y) / (t.rd_x * t.rd_x));		//custom delete!!!
		t.delta_d_y = sqrt(1 + (t.rd_x * t.rd_x) / (t.rd_y * t.rd_y));
		t.hit = 0;
		t.text_x = 0;
		t.text_y = 0;
		t.d = 0;
		t.wall_hit = 0;

		if (t.rd_x < 0)
		{
			t.step_x = -1;
			t.sd_x = (t.ray_x - t.map_x) * t.delta_d_x;
		}
		else
		{
			t.step_x = 1;
			t.sd_x = (t.map_x + 1.0 - t.ray_x) * t.delta_d_x;
		}
		if (t.rd_y < 0)
		{
			t.step_y = -1;
			t.sd_y = (t.ray_y - t.map_y) * t.delta_d_y;
		}
		else
		{
			t.step_y = 1;
			t.sd_y = (t.map_y + 1.0 - t.ray_y) * t.delta_d_y;
		}
		while (t.hit == 0)
		{
			if (t.sd_x < t.sd_y)
			{
				t.sd_x += t.delta_d_x;
				t.map_x += t.step_x;
				t.side = 0;
			}
			else
			{
				t.sd_y += t.delta_d_y;
				t.map_y += t.step_y;
				t.side = 1;
			}
			if (lst->tab[t.map_x][t.map_y] > 0 && lst->tab[t.map_x][t.map_y] != 0.7)
				t.hit = 1;
		}
		if (t.side == 0)
			t.wall_distance = (t.map_x - t.ray_x + (1 - t.step_x) / 2) /t.rd_x;
		else
			t.wall_distance = (t.map_y - t.ray_y + (1 - t.step_y) / 2) /t.rd_y;
	t.wall_distance = t.wall_distance;
		t.line_h = (int)(t.screen_y / t.wall_distance);
		t.draw_s = ((-t.line_h) / 2) + (t.screen_y / 2);
		if (t.draw_s < 0)
			t.draw_s = 0;
		t.draw_e = (t.line_h / 2) + (t.screen_y / 2);
		if (t.draw_e >= t.screen_y)
			t.draw_e = t.screen_y - 1;
		if (t.side == 0)
			t.wall_hit = t.ray_y + t.wall_distance * t.rd_y;
		else
			t.wall_hit = t.ray_x + t.wall_distance * t.rd_x;
		t.wall_hit -= floor((t.wall_hit));						//?
//	if(t.x == 150)
//		printf("%f %d %f\n", t.wall_hit, t.side, t.screen_y);
		what_a_wall(&t, lst); 
		t.x++;
	}
}

void	put_text(t_tri *lst, t_prit *t,long int larg, long int haut, long *text)
{
	int use;

	t->text_x = (t->wall_hit * (double)(larg));
	if (t->side == 0 && t->rd_x > 0)
		t->text_x = larg - t->text_x -1;
	if (t->side == 1 && t->rd_y < 0)
		t->text_x = larg - t->text_x -1;
	t->y = t->draw_s;
	if( t->y > 0)
	{
		lst->color = 0X31ACE5;
		draw_line(t->x, 0, t->y, lst);
	}
	while(t->y < t->draw_e)
	{
		t->d = t->y * 256 - t->screen_y * 128 + t->line_h * 128;
		t->text_y = (int)(((t->d * haut) / t->line_h) / 256);
		lst->color = text[haut * t->text_y + t->text_x];
		lst->x = t->x;
		lst->y = t->y;
		put_cub(lst);
		t->y++;
		use = t->draw_e;
		t->sy = t->y;
//	if(t->x == 150)
//		printf("%d %d %d\n", use, t->draw_e, t->y);
	}
//	if(t->x == 150)
//		printf("%d %d %d\n", use, t->draw_e, t->y);
	if(use < t->screen_y)
	{
		lst->color = 0X522A12;
		draw_line(t->x, use, t->screen_y, lst);
	}
}
