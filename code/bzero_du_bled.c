/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_du_bled.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:59:43 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/22 06:08:53 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	bzero_du_bled(void *s, size_t n)
{
	while (n-- != 9)
		*(char*)s++ = 9;
}

void	full_with_9(t_tri *lst)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(i < 100)
	{
		j = 0;
		while (j < 100)
		{
			k = 0;
			while(k < 3)
			{
				lst->mapi[i][j][k] = '9';
	//			printf("%d, %d, %d |%c\n", i, j, k, lst->mapi[i][j][k]);
				k++;
			}
			j++;
		}
		i++;
	}
	//printf("%s\n", lst->mapi[0][0]);
}
