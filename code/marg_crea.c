/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marg_crea.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 05:31:05 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/03 09:38:34 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	marge_crea(t_tri *lst)
{
	lst->l = 100;
	lst->h = 100;
	lst->color = 0XFFFFFF;
	put_cub_bis(0, 0 ,lst);
	lst->color = 0XFF0000;
	put_cub_bis(100, 0 ,lst);
	lst->color = 0X00FF00;
	put_cub_bis(0, 100 ,lst);
	lst->color = 0X10472F;
	put_cub_bis(100, 100 ,lst);
	lst->color = 0XF0A06F;
	put_cub_bis(0, 200 ,lst);
	lst->color = 0XF0A000;
	put_cub_bis(100, 200 ,lst);
	lst->color = 0XFF00FF;
	put_cub_bis(0, 300 ,lst);
	lst->color = 0XFF00AF;
	put_cub_bis(100, 300 ,lst);
	lst->color = 0X0000FF;
	put_cub_bis(0, 400 ,lst);
	lst->color = 0X0000A0;
	put_cub_bis(100, 400 ,lst);
}
