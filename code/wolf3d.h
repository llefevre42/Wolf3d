/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 01:32:23 by llefevre          #+#    #+#             */
/*   Updated: 2017/09/09 19:50:14 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> 		//delete
# include "mlx.h"
# include <math.h>
# define BUFSIZE 2048
# define RAY 0.26
# define SPEED 0.33


struct				s_tri
{
	char		*map;
	void		*mlx;
	void		*win;
	void		*pt_img;
	void		*pt_text1;
	unsigned int			*img;
	unsigned int			*pt_yanma;
	long int	color;
	long int i;
	long int j;
	long int k;
	long int x;
	long int y;
	long double egal;
	long double egal2;
	long int lon;
	double start_x;
	double start_y;
	double angle_p;
	double angle_s;
	double dir_x;
	double dir_y;
	double		tab[100][100];
	int ray;
};
typedef struct		 s_tri	t_tri;

void	gene_text(t_tri *lst);
void	bzero_du_bled(void *s, size_t n);
void	action(t_tri *lst);
void	p_player(int key, t_tri *lst);
void	put_in_black(t_tri *lst);
void	draw_line(int x, int start, int end, t_tri *lst);
void	hauteur_mur(t_tri *lst);
int		my_key_funct(int keycode, void *param);
void	ft_error(int i);
char	*ft_read(char *av);
void	print_mini_map(t_tri *lst, char **av);
void	atoi_dimaentionelle(char str, t_tri *lst, int nb);
void	number(char *str, t_tri *lst);
void	generation(t_tri *lst, char **av);
void	what_a_cub(t_tri *lst);
int		put_cub(t_tri *lst);

#endif
