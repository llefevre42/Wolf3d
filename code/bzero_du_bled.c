/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_du_bled.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:59:43 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/07 22:22:48 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	bzero_du_bled(void *s, size_t n)
{
	while (n-- != 1)
		*(char*)s++ = 1;
}