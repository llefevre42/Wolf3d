/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 01:32:23 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/02 20:46:47 by llefevre         ###   ########.fr       */
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
# define BUFSIZE 1000000
# define RAY 0.26
# define SPEED 0.25

struct				s_prit
{
	double	start_x;
	double	start_y;
	double	dir_x;
	double	dir_y;
	double	plan_x;
	double	plan_y;
	double	time;
	double	p_time;
	double	screen_x;
	double	screen_y;
	int x;
	int y;
	double	cam_x;
	double	ray_x;
	double	ray_y;
	double	rd_x;
	double	rd_y;
	int map_x;
	int	map_y;
	double	sd_x;
	double	sd_y;
	double	delta_d_x;
	double	delta_d_y;
	double	wall_distance;
	double	wall_hit;
	int text_x;
	int text_y;
	int d;
	int step_x;
	int step_y;
	int hit;
	int side;
	int	line_h;
	int	draw_s;
	int draw_e;
	double rota;
};
typedef struct		 s_prit	t_prit;


struct				s_tri
{
	char		*map;
	void		*mlx;
	void		*win;
	void		*win2;
	void		*pt_img;
	void		*pt_img2;
	void		*pt_img3;
	void		*pt_text1;
	unsigned char 		*tex_arb;
	unsigned int			*img;
	unsigned int			*img2;
	unsigned int			*img3;
	unsigned int			*marge;
	unsigned int			*pt_yanma;
	unsigned int			*yanma;
	unsigned int			*tp;
	char	 				*tabi;
	long int				*arbre;
	long int				*golgari;
	long int				*lux;
	long int				swap[200000];
	long int				haut_a;
	long int				larg_a;
	long int				haut_g;
	long int				larg_g;
	long int				haut_l;
	long int				larg_l;
	long int	color;
	long int re_arb;
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
	char		mapi[100][100][4];
	int ray;
	int	p_v;
	int	blk;
	int spe;
	int	p_x;
	int	p_y;
	int modif;
	int re;
	long int	size_te;
};
typedef struct		 s_tri	t_tri;


char		*ft_read(char *av, t_tri *lst);
void		text_golgari(t_tri *lst);
void		text_lux(t_tri *lst);
void		put_text(t_tri *lst, t_prit *t, long int larg, long int haut, long *text);
long		*tri_bmp(t_tri *lst, unsigned char *text, long int size, long int *swap);
double		ft_pow(double x, double y);
void		ft_convert(char *hex, int i, long *sum);
long		ft_htoi(char *hex);
void	serious(t_tri *lst);
void	full_with_9(t_tri *lst);
void	color_map(t_tri *lst);
void	learn_code(int x, int y, t_tri *lst);
void	affiche_map(t_tri *lst);
void	crea_map(t_tri *lst);
int		put_mousse(int keycode, int x, int y, void *param);
void	gene_text(t_tri *lst);
void	bzero_du_bled(void *s, size_t n);
void	action(t_tri *lst);
void	p_player(int key, t_tri *lst);
void	put_in_black(t_tri *lst);
void	draw_line(int x, int start, int end, t_tri *lst);
void	hauteur_mur(t_tri *lst);
int		my_key_funct(int keycode, void *param);
void	ft_error(int i);
void	print_mini_map(t_tri *lst, char **av);
void	atoi_dimaentionelle(char str, t_tri *lst, int nb);
void	number(char *str, t_tri *lst);
void	generation(t_tri *lst, char **av);
void	what_a_cub(t_tri *lst);
int		put_cub(t_tri *lst);

#endif
