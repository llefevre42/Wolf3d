/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_a_wall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 08:14:27 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 17:09:18 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	what_a_wall(t_prit *t, t_tri *lst)
{

	if(lst->tab[t->map_x][t->map_y] == 0.1 || lst->tab[t->map_x][t->map_y] == 0.2)
		put_text(lst, t, lst->larg_g, lst->haut_g, lst->golgari);
	else if(lst->tab[t->map_x][t->map_y] == 0.4 || lst->tab[t->map_x][t->map_y] == 0.3)
		put_text(lst, t, lst->larg_l, lst->haut_l, lst->lux);
	else if(lst->tab[t->map_x][t->map_y] == 0.5 || lst->tab[t->map_x][t->map_y] == 0.6)
		put_text(lst, t, lst->larg_k, lst->haut_k, lst->kog);
	else if(lst->tab[t->map_x][t->map_y] == 0.8)
		put_text(lst, t, lst->larg_a, lst->haut_a, lst->arbre);
	else if(lst->random == 0 && lst->tab[t->map_x][t->map_y] != 1 && lst->tab[t->map_x][t->map_y] != 1.8)
	{
		//		put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
		//		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
		seed_random_0(t, lst);
	}
	else if(lst->random == 1 && lst->tab[t->map_x][t->map_y] != 1 && lst->tab[t->map_x][t->map_y] != 1.8)
		seed_random_1(t, lst);
	else if(lst->random == 2 && lst->tab[t->map_x][t->map_y] != 1 && lst->tab[t->map_x][t->map_y] != 1.8)
		seed_random_2(t, lst);
	//	else if(lst->random == 0 && lst->tab[t->map_x ][t->map_y]  == 1.2)
	//		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
	/*	else if(lst->random == 1 && lst->tab[t->map_x][t->map_y] != 1 && lst->tab[t->map_x ][t->map_y] < 2)
		seed_random_1(t, lst);
		else if(lst->random == 2 && lst->tab[t->map_x][t->map_y] != 1 && lst->tab[t->map_x ][t->map_y] < 2)
		seed_random_2(t, lst);
		*/	else
	put_text(lst, t, lst->larg_f, lst->haut_f, lst->flag);
}

void	seed_random_0(t_prit *t, t_tri *lst)
{
	if(lst->tab[t->map_x][t->map_y] == 1.1)
		put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
	if(lst->tab[t->map_x][t->map_y] == 1.2)
		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
	if(lst->tab[t->map_x][t->map_y] == 1.3)
		put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
	if(lst->tab[t->map_x][t->map_y] == 1.4)
		put_text(lst, t, lst->larg_pass_m, lst->haut_pass_m, lst->pass_m);
	if(lst->tab[t->map_x][t->map_y] == 1.5)
		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
	if(lst->tab[t->map_x][t->map_y] == 1.6)
		put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
	if(lst->tab[t->map_x][t->map_y] == 2.9)
		put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
	//		printf("\n\n%ld\n\n", lst->random);
	//	lst->mdp = "yanma";
	//		printf("\n\n%ld\n\n", lst->random);
}

void	seed_random_1(t_prit *t, t_tri *lst)
{
	if(lst->tab[t->map_x][t->map_y] == 1.1)
		put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
	if(lst->tab[t->map_x][t->map_y] == 1.2)
		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
	if(lst->tab[t->map_x][t->map_y] == 1.3)
		put_text(lst, t, lst->larg_pass_c, lst->haut_pass_c, lst->pass_c);
	if(lst->tab[t->map_x][t->map_y] == 1.4)
	put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
	if(lst->tab[t->map_x][t->map_y] == 1.5)
		put_text(lst, t, lst->larg_pass_t, lst->haut_pass_t, lst->pass_t);
	if(lst->tab[t->map_x][t->map_y] == 1.6)
		put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
	if(lst->tab[t->map_x][t->map_y] == 2.9)
		put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
	//		printf("\n\n%ld\n\n", lst->random);
	//		//	lst->mdp = "yanma";
	//		//		printf("\n\n%ld\n\n", lst->random);
}


void	seed_random_2(t_prit *t, t_tri *lst)
{
	if(lst->tab[t->map_x][t->map_y] == 1.1)
		put_text(lst, t, lst->larg_pass_c, lst->haut_pass_c, lst->pass_c);
	if(lst->tab[t->map_x][t->map_y] == 1.2)
		put_text(lst, t, lst->larg_pass_b, lst->haut_pass_b, lst->pass_b);
	if(lst->tab[t->map_x][t->map_y] == 1.3)
		put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
	if(lst->tab[t->map_x][t->map_y] == 1.4)
		put_text(lst, t, lst->larg_pass_u, lst->haut_pass_u, lst->pass_u);
	if(lst->tab[t->map_x][t->map_y] == 1.5)
		put_text(lst, t, lst->larg_pass_t, lst->haut_pass_t, lst->pass_t);
	if(lst->tab[t->map_x][t->map_y] == 1.6)
		put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
	if(lst->tab[t->map_x][t->map_y] == 2.9)
		put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
	//		printf("\n\n%ld\n\n", lst->random);
	//		//	lst->mdp = "yanma";
	//		//		printf("\n\n%ld\n\n", lst->random);
}


/*void	seed_random_1(t_prit *t, t_tri *lst)
  {
  if(lst->tab[t->map_x][t->map_y] == 1.1)
  put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
  if(lst->tab[t->map_x][t->map_y] == 1.2)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  if(lst->tab[t->map_x][t->map_y] == 1.3)
  put_text(lst, t, lst->larg_pass_c, lst->haut_pass_c, lst->pass_c);
  if(lst->tab[t->map_x][t->map_y] == 1.4)
  put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
  if(lst->tab[t->map_x][t->map_y] == 1.5)
  put_text(lst, t, lst->larg_pass_t, lst->haut_pass_t, lst->pass_t);
  if(lst->tab[t->map_x][t->map_y] == 1.6)
  put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
  if(lst->tab[t->map_x][t->map_y] == 1.7)
  put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
//	lst->mdp = "coton";
}

void	seed_random_2(t_prit *t, t_tri *lst)
{
if(lst->tab[t->map_x][t->map_y] == 1.1)
put_text(lst, t, lst->larg_pass_c, lst->haut_pass_c, lst->pass_c);
else if(lst->tab[t->map_x][t->map_y] == 1.2)
put_text(lst, t, lst->larg_pass_b, lst->haut_pass_b, lst->pass_b);
else if(lst->tab[t->map_x][t->map_y] == 1.3)
put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
else if(lst->tab[t->map_x][t->map_y] == 1.4)
put_text(lst, t, lst->larg_pass_u, lst->haut_pass_u, lst->pass_u);
else if(lst->tab[t->map_x][t->map_y] == 1.5)
put_text(lst, t, lst->larg_pass_t, lst->haut_pass_t, lst->pass_t);
else if(lst->tab[t->map_x][t->map_y] == 1.6)
put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
else if(lst->tab[t->map_x][t->map_y] == 1.7)
put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
lst->mdp = "bocal";
}
*/
/*void	seed_random_3(t_prit *t, t_tri *lst)
  {
  if(lst->tab[t->map_x][t->map_y] == 1.1)
  put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
  else if(lst->tab[t->map_x][t->map_y] == 1.2)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.3)
  put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
  else if(lst->tab[t->map_x][t->map_y] == 1.4)
  put_text(lst, t, lst->larg_pass_m, lst->haut_pass_m, lst->pass_m);
  else if(lst->tab[t->map_x][t->map_y] == 1.5)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.6)
  put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
  else if(lst->tab[t->map_x][t->map_y] == 1.7)
  put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
  lst->mdp = ""
  }

  void	seed_random_4(t_prit *t, t_tri *lst)
  {
  if(lst->tab[t->map_x][t->map_y] == 1.1)
  put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
  else if(lst->tab[t->map_x][t->map_y] == 1.2)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.3)
  put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
  else if(lst->tab[t->map_x][t->map_y] == 1.4)
  put_text(lst, t, lst->larg_pass_m, lst->haut_pass_m, lst->pass_m);
  else if(lst->tab[t->map_x][t->map_y] == 1.5)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.6)
  put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
  else if(lst->tab[t->map_x][t->map_y] == 1.7)
  put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
  lst->mdp = "yanma"
  }

  void	seed_random_5(t_prit *t, t_tri *lst)
  {
  if(lst->tab[t->map_x][t->map_y] == 1.1)
  put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
  else if(lst->tab[t->map_x][t->map_y] == 1.2)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.3)
  put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
  else if(lst->tab[t->map_x][t->map_y] == 1.4)
  put_text(lst, t, lst->larg_pass_m, lst->haut_pass_m, lst->pass_m);
  else if(lst->tab[t->map_x][t->map_y] == 1.5)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.6)
  put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
  else if(lst->tab[t->map_x][t->map_y] == 1.7)
  put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
  lst->mdp = "yanma"
  }

  void	seed_random_6(t_prit *t, t_tri *lst)
  {
  if(lst->tab[t->map_x][t->map_y] == 1.1)
  put_text(lst, t, lst->larg_pass_y, lst->haut_pass_y, lst->pass_y);
  else if(lst->tab[t->map_x][t->map_y] == 1.2)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.3)
  put_text(lst, t, lst->larg_pass_n, lst->haut_pass_n, lst->pass_n);
  else if(lst->tab[t->map_x][t->map_y] == 1.4)
  put_text(lst, t, lst->larg_pass_m, lst->haut_pass_m, lst->pass_m);
  else if(lst->tab[t->map_x][t->map_y] == 1.5)
  put_text(lst, t, lst->larg_pass_a, lst->haut_pass_a, lst->pass_a);
  else if(lst->tab[t->map_x][t->map_y] == 1.6)
  put_text(lst, t, lst->larg_pass_l, lst->haut_pass_l, lst->pass_l);
else if(lst->tab[t->map_x][t->map_y] == 1.7)
	put_text(lst, t, lst->larg_pass_o, lst->haut_pass_o, lst->pass_o);
	lst->mdp = "yanma"
	}*/
