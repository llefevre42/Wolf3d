/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_text.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 13:44:38 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/07 17:55:12 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

long		*tri_bmp(t_tri *lst,  unsigned char *text, long int size, long int *swap)
{
	long int	i;
	long int	j;
	long int	start;
	long int	color;
	long int *c;
	char s[4];

	c = (long int*)s;
	i = 0;
	j = 0;
	start = (unsigned char)text[14] + 14;
	printf("%ld %ld \n", start, size);
	if(32 == (unsigned char)text[28])
		size -= 1;
	else
		size -= 0;
	while(start < size)
	{
		color = 0;
		if(32 == (unsigned char)text[28])
			size -= 4;
		else
			size -= 3;
		s[0] = (unsigned char)text[size];
		//color = color << 8;
		s[1] = /*color |*/ (unsigned char)text[size + 1];
		//color = color << 8;
		s[2] = /*color |*/ (unsigned char)text[size + 2];
		s[3] = 0;
		swap[i] = *c;
		i++;
	}
	return (swap);
}


