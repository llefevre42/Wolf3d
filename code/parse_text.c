/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_text.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 13:44:38 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/03 11:23:14 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

long		*tri_bmp(t_tri *lst,  unsigned char *text, long int larg, long int *swap)
{
	long int	i;
	long int	j;
	long int	start;
	long int	size;
	long int 	mult;
	long int *c;
	char s[4];

	c = (long int*)s;
	i = 0;
	size = lst->re;
	start = (unsigned char)text[14] + 14;
	if(32 == (unsigned char)text[28])
	{
		size -= 2;
		mult = 4;
	}
	else
	{
		size -= 0;
		mult = 3;
	}
	while (size - (larg * mult)  > 137)
	{ 
		size = size - (larg * mult);
		j = 0;
		while (j + size  < (larg * mult) + size)
		{
			s[0] = (unsigned char)text[j + size];
			s[1] = (unsigned char)text[j + size + 1];
			s[2] = (unsigned char)text[j + size + 2];
			s[3] = 0;
			swap[i] = *c;
			i++;
			if(32 == (unsigned char)text[28])
				j += 4;
			else
				j += 3;
		}
	}
	return (swap);
}
