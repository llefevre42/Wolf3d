/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 01:32:23 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 16:09:34 by llefevre         ###   ########.fr       */
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
# include <sys/timeb.h>
# include <time.h>
# define BUFSIZE 1000000
# define RAY 0.26
# define SPEED 0.15

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
	int		sy;
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
	void		*pt_marge;
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
	long int				*kog;
	long int				*flag;
	long int				swap[200000];
	long int				haut_a;
	long int				larg_a;
	long int				haut_g;
	long int				larg_g;
	long int				haut_l;
	long int				larg_l;
	long int				haut_k;
	long int				larg_k;
	long int				larg_f;
	long int				haut_f;
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
	char *name;
	int	drag_in_x;
	int drag_in_y;
	int	drag_out_x;
	int drag_out_y;
	int l;
	int h;
	int zoom;
	long int time;
	char			*mdp;
	long int	random;
	long int				larg_pass_a;
	long int				haut_pass_a;
	long int				*pass_a;
	long int				larg_pass_b;
	long int				haut_pass_b;
	long int				*pass_b;
	long int				larg_pass_c;
	long int				haut_pass_c;
	long int				*pass_c;
	long int				larg_pass_l;
	long int				haut_pass_l;
	long int				*pass_l;
	long int				larg_pass_m;
	long int				haut_pass_m;
	long int				*pass_m;
	long int				larg_pass_n;
	long int				haut_pass_n;
	long int				*pass_n;
	long int				larg_pass_o;
	long int				haut_pass_o;
	long int				*pass_o;
	long int				larg_pass_s;
	long int				haut_pass_s;
	long int				*pass_s;
	long int				larg_pass_t;
	long int				haut_pass_t;
	long int				*pass_t;
	long int				larg_pass_u;
	long int				haut_pass_u;
	long int				*pass_u;
	long int				larg_pass_y;
	long int				haut_pass_y;
	long int				*pass_y;
	int str;
//	long int				larg_pass_a;
//	long int				haut_pass_a;
//	long int				*pass_a;
};
typedef struct		 s_tri	t_tri;

void	seed_random_0(t_prit *t, t_tri *lst);
void	seed_random_1(t_prit *t, t_tri *lst);
void	seed_random_2(t_prit *t, t_tri *lst);
void		pass_a(t_tri *lst);
void		pass_b(t_tri *lst);
void		pass_c(t_tri *lst);
void		pass_l(t_tri *lst);
void		pass_m(t_tri *lst);
void		pass_n(t_tri *lst);
void		pass_o(t_tri *lst);
void		pass_s(t_tri *lst);
void		pass_t(t_tri *lst);
void		pass_u(t_tri *lst);
void		pass_y(t_tri *lst);
//void		pass_a(t_tri *lst);
//void		pass_a(t_tri *lst);
char	what_a_char(int nb);
void	what_a_wall(t_prit *t, t_tri *lst);
char *make_str(char c);
void	marge_crea(t_tri *lst);
int			put_cub_bis(int x, int y, t_tri *lst);
int			zoom(int keycode, int x, int y, t_tri *lst);
char		*ft_read(char *av, t_tri *lst);
void		text_golgari(t_tri *lst);
void		text_lux(t_tri *lst);
void		text_kog(t_tri *lst);
void		text_flag(t_tri *lst);
void		put_text(t_tri *lst, t_prit *t, long int larg, long int haut, long *text);
long		*tri_bmp(t_tri *lst, unsigned char *text, long int larg, long int *swap);
double		ft_pow(double x, double y);
void		ft_convert(char *hex, int i, long *sum);
long		ft_htoi(char *hex);
void	serious(t_tri *lst);
void	full_with_9(t_tri *lst);
void	color_map(t_tri *lst);
void	learn_code(int x, int y, t_tri *lst);
void	affiche_map(t_tri *lst);
void	crea_map(t_tri *lst, char *str);
int		put_mousse(int keycode, int x, int y, void *param);
int		key_in_drag(int key, int x, int y, t_tri *lst);
int		key_out_drag(int key, int x, int y, t_tri *lst);
void	gene_text(t_tri *lst);
void	bzero_du_bled(void *s, size_t n);
void	action(t_tri *lst);
void	p_player(int key, t_tri *lst);
void	put_in_black(t_tri *lst);
void	draw_line(int x, int start, int end, t_tri *lst);
void	hauteur_mur(t_tri *lst);
int		my_key_funct(int keycode, void *param);
int		my_key_crea(int keycode, void *param);
void	ft_error(int i);
void	print_mini_map(t_tri *lst, char **av);
void	atoi_dimaentionelle(char str, t_tri *lst, int nb);
void	number(char *str, t_tri *lst);
void	generation(t_tri *lst, char **av);
void	what_a_cub(t_tri *lst);
void	create_file(t_tri *lst);
int		put_cub(t_tri *lst);

#endif
