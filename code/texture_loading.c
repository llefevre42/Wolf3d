/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_loading.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 20:42:16 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 18:02:02 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	text_golgari(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap2;
	int l = 0;

	swap2 = ft_memalloc(300000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/insecte.bmp", lst);
	lst->haut_g =400; //(unsigned char)tabi[22];
	lst->larg_g =400;//(unsigned char)tabi[18];
	printf("%ld %ld\n", lst->haut_g, lst->larg_g);
	lst->golgari = tri_bmp(lst, (unsigned char *)tabi, lst->larg_g, swap2);
}

void	text_lux(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(100000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/Lux.bmp", lst);
	lst->haut_l =300; //(unsigned char)tabi[22];
	lst->larg_l =300;//(unsigned char)tabi[18];
	lst->lux = tri_bmp(lst, (unsigned char *)tabi, lst->larg_l, swap3);
}

void	text_kog(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(800000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/tp.bmp", lst);
	lst->haut_k =256;//(unsigned char)tabi[22];
	lst->larg_k =256;//(unsigned char)tabi[18];
	lst->re -= 1;
	lst->kog = tri_bmp(lst, (unsigned char *)tabi, lst->larg_k, swap3);
}

void	text_flag(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(700000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/bois.bmp", lst);
	lst->haut_f =256; //(unsigned char)tabi[22];
	lst->larg_f =256;//(unsigned char)tabi[18];
	lst->re -= 0;
	lst->flag = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	gene_text(t_tri *lst)
{
	unsigned char *tabs;
	long int *swap1;
	long int swaplol;


	swap1 = ft_memalloc(700000);
	lst->re = 0;
	tabs = (unsigned char *)ft_read("../texture/metal.bmp", lst);
	lst->haut_a = 512;//(unsigned char)tabs[22];
	lst->larg_a = 512;//(unsigned char)tabs[18];
	lst->re -= 0;
//	printf("%ld %ld\n", lst->haut_a, lst->larg_a);
//	printf("%d \n", lst->re);
	lst->arbre = tri_bmp(lst, (unsigned char *)tabs, lst->larg_a, swap1);
	text_golgari(lst);
	text_kog(lst);
	text_lux(lst);
	text_flag(lst);
	swaplol = lst->random;
	pass_a(lst);
	pass_b(lst);
	pass_c(lst);
	pass_l(lst);
	pass_m(lst);
	pass_n(lst);
	pass_o(lst);
	pass_s(lst);
	pass_t(lst);
	pass_u(lst);
	pass_y(lst);
	lst->random = swaplol;
	printf("\n\n%ld\n\n", lst->random);
}
