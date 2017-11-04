/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_keycode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 04:43:39 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 17:36:08 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"


int		my_key_funct(int keycode, void *param)
{
	t_tri *lst;
//	long int i;
	double tmp1;
	double tmp2;
	char *lol;

	lst = ((t_tri *)param);
	printf("keycode : %d\n", keycode);
	if (keycode == 53)
		exit(0);
/*	if (keycode == 75)
	
	if (keycode == 67)
	
	if (keycode == 78)

	if (keycode == 69)
	
	if (keycode == 35)
	
	if (keycode == 41)
	
	if (keycode == 31)
	
	if (keycode == 37)
	
	if (keycode == 34)
	
	if (keycode == 40)

*/	else if (keycode == 123 || keycode == 124 || keycode == 126 ||keycode == 125)
		p_player(keycode, lst);
	else if (keycode == 88)
	{
		tmp1 = lst->dir_x;
		tmp2 = lst->angle_p;
		lst->dir_x = lst->dir_x * cos(-RAY) - lst->dir_y * sin(-RAY);	
		lst->dir_y = tmp1 * sin(-RAY) + lst->dir_y * cos(-RAY);
		lst->angle_p = lst->angle_p * cos(-RAY) - lst->angle_s * sin(-RAY);
		lst->angle_s = tmp2 * sin(-RAY) + lst->angle_s * cos(-RAY);
		lst->ray++;
		if(lst->ray == 24)
			lst->ray = 0;
	}
	else if (keycode == 86)
	{
		tmp1 = lst->dir_x;
		tmp2 = lst->angle_p;
		lst->dir_x = lst->dir_x * cos(RAY) - lst->dir_y * sin(RAY);	
		lst->dir_y = tmp1 * sin(RAY) + lst->dir_y * cos(RAY);
		lst->angle_p = lst->angle_p * cos(RAY) - lst->angle_s * sin(RAY);
		lst->angle_s = tmp2 * sin(RAY) + lst->angle_s * cos(RAY);
		lst->ray--;
		if(lst->ray == -1)
			lst->ray = 23;
	}
	else if (keycode == 76)
	{
		action(lst);
		if(lst->str == 0)
			lst->str = 1;
		else
			lst->str = 0;
	}
	else 
	{
		if(lst->str == 1)
			lol = make_str(what_a_char(keycode));
	}
/*	if (keycode == 85)
	if (keycode == 83)
	if (keycode == 87)
	{

	}
	if (keycode == 84)
	{
	}
	if (keycode == 18)
	{

	}
	if (keycode == 19)
	{

	}
	if (keycode == 20)
	{

	}
	if (keycode == 21)
	{
	
	}
	if (keycode == 23)
	{

	}
	if (keycode == 22)
	{

	}
	if (keycode == 26)
	{

	}
	if (keycode == 28)
	{

	}
	if (0 == ft_strcmp(lst->av, "buddhabrot"))
	{

	}
	if (0 == ft_strcmp(lst->av, "mandelbrot"))
	{

	}
	if (0 == ft_strcmp(lst->av, "julia"))
	{

	}
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
//	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
*/	put_in_black(lst);
	hauteur_mur(lst);
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	if(lst->str == 1 && lol[0] != 'U')
		mlx_string_put(lst->mlx, lst->win, 450, 450, 0X00FF00, lol);
//	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_yanma, 0, 0);
	return (0);
}

int		my_key_crea(int keycode, void *param)
{
	t_tri *lst;
	lst = ((t_tri *)param);
	if (keycode == 53)
	{
		create_file(lst);
		exit(0);
	}
	return(0);
}
