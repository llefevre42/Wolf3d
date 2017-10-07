/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crea_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:05:50 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/29 13:58:46 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	crea_map(t_tri *lst)
{
	int trash1;	
	int trash2;
	int trash3;
	int trash4;
	int trash5;

	lst->mlx = mlx_init();
	lst->win = mlx_new_window(lst->mlx, 1400, 800, "Map Editor");
	lst->pt_img = mlx_new_image(lst->mlx, 1200, 800);
	lst->img  = (unsigned \
			int *)mlx_get_data_addr(lst->pt_img, &trash1, &trash2, &trash3);
	lst->marge = mlx_xpm_file_to_image(lst->mlx, "../texture/marge2.xpm", &trash4, &trash5);
	int i = 0;
	int j = 0;
	full_with_9(lst);
	mlx_mouse_hook(lst->win, put_mousse, lst);
	serious(lst);
}

void	serious(t_tri *lst)
{
	if(lst->modif == 1)
	{
		color_map(lst);
		affiche_map(lst);
	}
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 200, 0);
	mlx_put_image_to_window(lst->mlx, lst->win, lst->marge, 0, 0);
	mlx_loop(lst->mlx);
}

void	affiche_map(t_tri *lst)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	printf("la\n");
	while(x < 100)
	{
		y = 0;
		while(y < 100)
		{
			if(lst->mapi[x][y][0] != '9')
			{
				lst->lon = 30;
				learn_code(x, y, lst);
				lst->x = x * 30 ; 
				lst->y = y * 30;
				if(lst->x < 1200 && lst->y < 800)
				{
					printf("%ld\n", lst->color);
					put_cub(lst);
				}
			}
			y++;
		}
		x++;
	}
}


void	learn_code(int x, int y, t_tri *lst)
{
				printf("%d %d |%d| ", x, y, lst->mapi[x][y][0]);
	if(lst->mapi[x][y][0] == 0)
	{
		lst->color = 0XFF0000;
		if(lst->mapi[x][y][1] == '.')
		{
			if(lst->mapi[x][y][2] == 1)
				lst->color = 0XF0000F;
			if(lst->mapi[x][y][2] == 2)
				lst->color = 0XF0000F;
			if(lst->mapi[x][y][2] == 3)
				lst->color = 0XFF00FF;
			if(lst->mapi[x][y][2] == 4)
				lst->color = 0XFF00FF;
			if(lst->mapi[x][y][2] == 5)
				lst->color = 0X0000FF;
			if(lst->mapi[x][y][2] == 6)
				lst->color = 0X0000FF;
			if(lst->mapi[x][y][2] == 9)
				lst->color = 0X00FF00;
		}
	}
	else
		//(lst->mapi[x][y][0] == '1')
		lst->color = 0XFFFFFF;
}



void	color_map(t_tri *lst)
{
	int l_y;
	int l_x;
	int incr_x;
	int incr_y;

	incr_x = 0;
	incr_y = 0;
	l_y = 0;
	l_x = 0;
	while(l_x <= lst->p_x)
	{
		l_x += 30;
		incr_x++;
	}
	if(l_x > lst->p_x)
	{
		l_x -= 30;
		incr_x--;
	}
	while(l_y <= lst->p_y)
	{
		l_y += 30;
		incr_y++;
	}
	if(l_y > lst->p_y)
	{
		l_y -= 30;
		incr_y--;
	}
	printf("%d \n", lst->blk);
	if(lst->spe == 1)
	{
		lst->mapi[incr_x][incr_y][1] = '.';
		lst->mapi[incr_x][incr_y][2] = lst->p_v;
	}
	else
		ft_strclr(lst->mapi[incr_x][incr_y]);
	lst->mapi[incr_x][incr_y][0] = lst->blk;
}






//	int fd;
//	fd = open("lst->ac", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
//	write(fd, mapi[x][y], 1);
	
