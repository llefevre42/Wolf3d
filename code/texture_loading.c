/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_loading.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 20:42:16 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/02 22:18:57 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	text_golgari(t_tri *lst)
{
	unsigned char *tabi;
	long int  swap2[400000];
	int l = 0;

	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/insecte.bmp", lst);
	lst->haut_g =400; //(unsigned char)tabi[22];
	lst->larg_g =400;//(unsigned char)tabi[18];
	printf("%d %d\n", lst->haut_g, lst->larg_g);
	lst->golgari = tri_bmp(lst, (unsigned char *)tabi, lst->re, swap2);
}

void	text_lux(t_tri *lst)
{
	unsigned char *tabi;
	long int  swap3[100000];
	int l = 0;

	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/Lux.bmp", lst);
	lst->haut_l =300; //(unsigned char)tabi[22];
	lst->larg_l =300;//(unsigned char)tabi[18];
	lst->lux = tri_bmp(lst, (unsigned char *)tabi, lst->re, swap3);
}
