/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_pass.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 23:36:46 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 15:03:48 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	pass_a(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_A.bmp", lst);
	lst->haut_pass_a =256; //(unsigned char)tabi[22];
	lst->larg_pass_a =256;//(unsigned char)tabi[18];
	lst->re -= 0;
	lst->pass_a = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_b(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_B.bmp", lst);
	lst->haut_pass_b =256; //(unsigned char)tabi[22];
	lst->larg_pass_b =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_b = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_c(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_C.bmp", lst);
	lst->haut_pass_c =256; //(unsigned char)tabi[22];
	lst->larg_pass_c =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_c = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_l(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_L.bmp", lst);
	lst->haut_pass_l =256; //(unsigned char)tabi[22];
	lst->larg_pass_l =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_l = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_m(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_M.bmp", lst);
	lst->haut_pass_m =256; //(unsigned char)tabi[22];
	lst->larg_pass_m =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_m = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_n(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_N.bmp", lst);
	lst->haut_pass_n =256; //(unsigned char)tabi[22];
	lst->larg_pass_n =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_n = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_o(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_o.bmp", lst);
	lst->haut_pass_o =256; //(unsigned char)tabi[22];
	lst->larg_pass_o =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_o = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_s(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_S.bmp", lst);
	lst->haut_pass_s =256; //(unsigned char)tabi[22];
	lst->larg_pass_s =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_s = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_t(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_T.bmp", lst);
	lst->haut_pass_t =256; //(unsigned char)tabi[22];
	lst->larg_pass_t =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_t = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_u(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_U.bmp", lst);
	lst->haut_pass_u =256; //(unsigned char)tabi[22];
	lst->larg_pass_u =256;//(unsigned char)tabi[18];
	lst->re -= 2;
	lst->pass_u = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

void	pass_y(t_tri *lst)
{
	unsigned char *tabi;
	long int  *swap3;
	int l = 0;

	swap3 = ft_memalloc(1000000);
	lst->re = 0;
	tabi = (unsigned char *)ft_read("../texture/pass_Y.bmp", lst);
	lst->haut_pass_y =256; //(unsigned char)tabi[22];
	lst->larg_pass_y =256;//(unsigned char)tabi[18];
	lst->re -= 0;
	lst->pass_y = tri_bmp(lst, (unsigned char *)tabi, lst->larg_f, swap3);
}

