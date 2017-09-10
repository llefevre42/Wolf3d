/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:03:41 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/07 15:49:47 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	action(t_tri *lst)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.1)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.2)
				{
					lst->start_x = i;
					lst->start_y = j;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	else if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.2)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.1)
				{
					lst->start_x = i + 0.5;
					lst->start_y = j + 0.5;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.3)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.4)
				{
					lst->start_x = i;
					lst->start_y = j;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	else if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.4)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.3)
				{
					lst->start_x = i + 0.5;
					lst->start_y = j + 0.5;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.5)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.6)
				{
					lst->start_x = i;
					lst->start_y = j;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	else if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.6)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.5)
				{
					lst->start_x = i + 0.5;
					lst->start_y = j + 0.5;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
/*	if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.1)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.2)
				{
					lst->start_x = i;
					lst->start_y = j;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	else if(lst->tab[(int)(lst->start_x)][(int)(lst->start_y)] == 0.2)
	{
		while(i < 100)
		{
			while(j < 100)
			{
				if(lst->tab[i][j] == 0.1)
				{
					lst->start_x = i + 0.5;
					lst->start_y = j + 0.5;
					break;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
*/}


