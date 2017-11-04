/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_text.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:20:38 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 16:07:55 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "games.h"
#include "../wolf3d.h"

char	what_a_char(int nb)
{
	if(nb == 0)
		return('a');
	if(nb == 1)
		return('s');
	if(nb == 2)
		return('d');
	if(nb == 3)
		return('f');
	if(nb == 5)
		return('g');
	if(nb == 4)
		return('h');
	if(nb == 38)
		return('j');
	if(nb == 40)
		return('k');
	if(nb == 37)
		return('l');
	if(nb == 12)
		return('q');
	if(nb == 13)
		return('w');
	if(nb == 14)
		return('e');
	if(nb == 15)
		return('r');
	if(nb == 17)
		return('t');
	if(nb == 16)
		return('y');
	if(nb == 32)
		return('u');
	if(nb == 34)
		return('i');
	if(nb == 31)
		return('o');
	if(nb == 35)
		return('p');
	if(nb == 6)
		return('z');
	if(nb == 7)
		return('x');
	if(nb == 8)
		return('c');
	if(nb == 9)
		return('v');
	if(nb == 11)
		return('b');
	if(nb == 45)
		return('n');
	if(nb == 46)
		return('m');
	if(nb == 51)
		return('?');
	return(0);
}
