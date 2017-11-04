/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 19:07:32 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/31 23:18:03 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "wolf3d.h"
#include <time.h>
#include <sys/timeb.h>

void		ft_putnbr(int n);

int	main(void)
{
	int i = 0;
	int p = 0;
	int s = 0;
	int k = 0;
	int j = 0;
		srand(time(NULL));
	while(i++ < 30)
	{
//		ft_putnbr(rand() % 20);
//		p = ftime(NULL);
//		if( p != s)	
		getchar();
		p = rand() % 20;
			printf("ludo : %d\n", p );//, ftime(NULL));
		getchar();
		s = rand() % 20;
			printf("thib : %d\n", s);//, ftime(NULL));
		if ( s > p)
		{
			printf("--------\nthib WIN!!\n----------\n");
			k++;
		}
		if ( p > s)
		{
			printf("---------\nludo WIN!!\n---------\n");
			j++;
		}
//		s = p;
	}
	if(k > j)
			printf("--------\nthib  EPIC WIN!!\n----------\nT:%d L:%d\n", k, j);
	if(j > k)
			printf("--------\nludo  EPIC WIN!!\n----------\nT:%d L:%d\n", k, j);
	if(j == k)
			printf("--------\nVOUS PUEZ\n----------\n T:%d L:%d\n", k, j );


	return(0);
}
