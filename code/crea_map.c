/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crea_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:05:50 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 17:31:31 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	crea_map(t_tri *lst, char *str)
{
	int trash1;	
	int trash2;
	int trash3;
	int trash4;
	int trash5;

	lst->mlx = mlx_init();
	lst->zoom = 24;
	lst->win = mlx_new_window(lst->mlx, 1400, 800, "Map Editor");
	lst->pt_img = mlx_new_image(lst->mlx, 1200, 800);
	lst->img  = (unsigned \
			int *)mlx_get_data_addr(lst->pt_img, &trash1, &trash2, &trash3);
	lst->pt_marge = mlx_new_image(lst->mlx, 200, 800);
	lst->marge  = (unsigned \
			int *)mlx_get_data_addr(lst->pt_marge, &trash1, &trash2, &trash3);
	//	lst->marge = mlx_xpm_file_to_image(lst->mlx, "../texture/marge2.xpm", &trash4, &trash5);
	marge_crea(lst);
	lst->name = str;
	full_with_9(lst);
	//mlx_mouse_hook(lst->win, put_mousse, lst);
	mlx_hook(lst->win, 4, 3, key_in_drag, lst);
	mlx_hook(lst->win, 5, 3, key_out_drag, lst);
	mlx_hook(lst->win, 2,(1L <<0), my_key_crea, lst);
	serious(lst);
}

int	key_in_drag(int key, int x, int y, t_tri *lst)
{
	printf("%d, %d, %d \n", key, x,y);
	if (key == 5)
	{
		if(lst->zoom != 12)
			lst->zoom -= 4;
		affiche_map(lst);
		mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 200, 0);
	}
	else if (key == 4)
	{
		lst->zoom += 4;
		affiche_map(lst);
		mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 200, 0);
	}
	lst->drag_in_x = x;
	lst->drag_in_y = y;
	return(0);
}

int	key_out_drag(int key, int x, int y, t_tri *lst)
{
	int tmp3;

//	printf("%d, %d, %d \n", key, x,y);
	lst->drag_out_x = x;
	lst->drag_out_y = y;
	if(lst->drag_out_x < lst->drag_in_x)
	{
		x = lst->drag_in_x;
		tmp3 = lst->drag_out_x;
		lst->drag_out_x = lst->drag_in_x;
		lst->drag_in_x = tmp3;
	}
	if(lst->drag_out_y < lst->drag_in_y)
	{
		y = lst->drag_in_y;
		tmp3 = lst->drag_out_y;
		lst->drag_out_y = lst->drag_in_y;
		lst->drag_in_y = tmp3;
	}
	put_mousse(1, x , y, lst);
	return(0);
}

void	serious(t_tri *lst)
{
	int tmp;
	int tmp2;

	tmp2 = lst->p_y;
	tmp = lst->drag_in_y;
	if(lst->modif == 1)
	{
		while(lst->drag_in_x <= lst->drag_out_x)
		{
			lst->p_y = tmp2;
			lst->drag_in_y = tmp;
			while(lst->drag_in_y <= lst->drag_out_y)
			{
	//			printf("%d, %d, %d, %d \n", lst->drag_in_x, lst->drag_out_x, lst->drag_in_y, lst->drag_out_y);
				color_map(lst);
				affiche_map(lst);
				lst->drag_in_y += lst->zoom;
				lst->p_y -= lst->zoom;
			}
			lst->drag_in_x += lst->zoom;
			lst->p_x -= lst->zoom;
		}
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
	while(x < 100)
	{
		y = 0;
		while(y < 100)
		{
			if(lst->mapi[x][y][0] != 9)
			{
				lst->lon = lst->zoom;
				learn_code(x, y, lst);
				lst->x = x * lst->zoom; 
				lst->y = y * lst->zoom;
				if(lst->x < 1200 && lst->y < 800)
				{
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
	//	if(lst->mapi[x][y][0] != 9)
	//		printf("%d %d |%d|%d | %d \n", x, y, lst->mapi[x][y][0], lst->mapi[x][y][1], lst->mapi[x][y][2]);
	if(lst->mapi[x][y][0] == 0)
	{
		lst->color = 0XFF0000;
		if(lst->mapi[x][y][1] == 9)
		{
			if(lst->mapi[x][y][2] == 1)
				lst->color = 0XF0A06F;
			if(lst->mapi[x][y][2] == 2)
				lst->color = 0XF0A000;
			if(lst->mapi[x][y][2] == 3)
				lst->color = 0XFF00FF;
			if(lst->mapi[x][y][2] == 4)
				lst->color = 0XFF00A0;
			if(lst->mapi[x][y][2] == 5)
				lst->color = 0X0000FF;
			if(lst->mapi[x][y][2] == 6)
				lst->color = 0X0000A0;
			if(lst->mapi[x][y][2] == 7)
				lst->color = 0X00FF00;
			if(lst->mapi[x][y][2] == 8)
				lst->color = 0X10472F;
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
		l_x += lst->zoom;
		incr_x++;
	}
	if(l_x > lst->p_x)
	{
		l_x -= lst->zoom;
		incr_x--;
	}
	while(l_y <= lst->p_y)
	{
		l_y += lst->zoom;
		incr_y++;
	}
	if(l_y > lst->p_y)
	{
		l_y -= lst->zoom;
		incr_y--;
	}
	//	printf("%d \n", lst->blk);
	if(lst->spe == 1)
	{
		lst->mapi[incr_x][incr_y][1] = 9;
		lst->mapi[incr_x][incr_y][2] = lst->p_v;
	}
	else
	{
		lst->mapi[incr_x][incr_y][1] = 0;
		lst->mapi[incr_x][incr_y][2] = 0;
	}
	//lst->mapi[incr_x][incr_y][1] = 0;
	lst->mapi[incr_x][incr_y][0] = lst->blk;
}

void	create_file(t_tri *lst)
{
	int fd;
	int i;
	int j;

	i = 0;
	j = 0;
	fd = open(lst->name, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	while(i < 100)
	{
		j = 0;
		while(j < 100)
		{
			if(lst->mapi[j][i][0] == 1)
				ft_putnbr_fd(1, fd);
			else
				ft_putnbr_fd(lst->mapi[j][i][0], fd);
			if(lst->mapi[j][i][2] < 9 && lst->mapi[j][i][2] > 0)
			{
				write(fd, ".", 1);
				ft_putnbr_fd(lst->mapi[j][i][2], fd);
			}
			ft_putchar_fd(' ', fd);
			j++;
		}
		ft_putchar_fd('\n', fd);
		i++;
	}			
	printf("FILE CREATE");
}	
