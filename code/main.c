/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 06:24:08 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/07 17:56:07 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	generation(t_tri *lst, char **av)
{
	int trash1;
	int trash2;
	int trash3;

	lst->mlx = mlx_init();
	lst->win = mlx_new_window(lst->mlx, 1200, 800, av[1]);
	lst->pt_img = mlx_new_image(lst->mlx, 1200, 800);
	lst->img  = (unsigned \
			int *)mlx_get_data_addr(lst->pt_img, &trash1, &trash2, &trash3);
}

void	gene_text(t_tri *lst)
{
	int trash1;
	int trash2;
	int trash3;
	int trash4;
	int trash5;
	int i;
	
	i = 0;
	int fd;
	int re;
	unsigned char *tabs;
	int l = 0;
	long int *c;
	long int *w;
	char s[4];
	char r[4];
//	c = (long int *)s;
//	w = (long int *)r;
	long int  swap1[100000];

	tabs = (unsigned char *)ft_read("../texture/arbre.bmp", lst);

//	s[3] = (unsigned char)tabs[19];
//	s[2] = (unsigned char)tabs[20];
//	s[1] = (unsigned char)tabs[21];
//	s[0] = (unsigned char)tabs[22];
//	r[3] = (unsigned char)tabs[15];
//	r[2] = (unsigned char)tabs[16];
//	r[1] = (unsigned char)tabs[17];
//	r[0] = (unsigned char)tabs[18];
//	lst->haut_a = *c;
//	lst->larg_a = *w;
	lst->haut_a = (unsigned char)tabs[22];
	lst->larg_a = (unsigned char)tabs[18];
	printf("%ld %ld\n", lst->haut_a, lst->larg_a);
	printf("%d \n", lst->re);
	lst->arbre = tri_bmp(lst, (unsigned char *)tabs, lst->re, swap1);
	text_golgari(lst);
	text_lux(lst);
}

char	*ft_read(char *av, t_tri *lst)
{
	int		fd;
	char	buf[BUFSIZE + 1];
	char *out;
	ssize_t	re;

	if ((strcmp(av, "Makefile") == 0) || (strcmp(av, "random") == 0))
		ft_error(0);
	printf("kh\n");
	fd = open(av, O_RDONLY);
	out = NULL;
	if (fd == -1)
		return (NULL);
	while ((re = read(fd, &buf, BUFSIZE)) > 0)
	{
	printf("kh\n");
		lst->re = re;
		out  = ft_malloncat(out, buf, re);
	}
		printf(" re = %d \n",lst->re);
	return (out);
}

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
}

void	print_mini_map(t_tri *lst, char **av)
{
	generation(lst, av);
	gene_text(lst);
	while (lst->map[lst->i])
	{
		lst->egal = 0;
		lst->egal2 = 0;
		if (lst->map[lst->i] == '\n')
		{
			lst->x = 0;
			lst->y += 30;
			lst->i++;
			lst->k++;
			lst->j = 0;
		}
		if(lst->map[lst->i] >= '0' && lst->map[lst->i] <= '9')
			number(lst->map, lst);
		if(lst->map[lst->i] != '\n' && lst->map[lst->i] != '\0')
		{
			lst->x += 30;
			lst->i++;
		}
	}
	hauteur_mur(lst);
	lst->ray = 0;
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
	mlx_loop(lst->mlx);
}

void	atoi_dimentionelle(char str, t_tri *lst, int nb)
{
	if(nb == 1)
	{
		if (lst->egal * 10 > 2147483647)
			ft_error(0);
		if (lst->egal * 10 < -2147483648)
			ft_error(0);
		lst->egal *= 10;
		lst->egal += (long int)str - '0';
	}
	else
	{
		if (lst->egal2 * 10 > 2147483647)
			ft_error(0);
		if (lst->egal2 * 10 < -2147483648)
			ft_error(0);
		lst->egal2 *= 10;
		lst->egal2 += (long int)str - '0';
	}
}

void	number(char *str, t_tri *lst)
{
	while (str[lst->i] >= 48 && str[lst->i] <= 57)
	{
		atoi_dimentionelle(str[lst->i], lst, 1);
		lst->i++;
	}
	if (str[lst->i] == '.')
	{
		lst->i++;
		while (str[lst->i] >= 48 && str[lst->i] <= 57)
		{
			atoi_dimentionelle(str[lst->i], lst, 2);
			lst->i++;
		}
		lst->egal = lst->egal + (lst->egal2 / 10);
	}
	lst->tab[lst->k][lst->j] = lst->egal;
	lst->j++;
	what_a_cub(lst);
}
int		main(int ac, char **av)
{
	t_tri	lst;
	int fd;
	char *line;
	int i;
	int j;

	j = 0;
	i = 0;
	lst.start_x = 2.5;
	lst.start_y = 2.5;
	lst.spe = 0;
	lst.p_v = 0;
	lst.blk = 0;
	lst.ray = 0;
	lst.angle_p = 0;
	lst.angle_s = 0.60;
	lst.dir_x = -1;
	lst.dir_y = 0;
	lst.egal = 0;
	lst.egal2 = 0;
	lst.x = 0;
	lst.y = 0;
	lst.color = 0;
	lst.lon = 30;
	lst.i = 0;
	lst.j = 0;
	lst.k = 0;
	if(ft_strcmp(av[1], "crea") == 0)
		crea_map(&lst);
	else
	{
		fd = open(av[1], O_RDONLY);
		get_next_line(fd, &line);
		lst.map = line;
		printf("%s\n", lst.map);
		print_mini_map(&lst, av);
	}
	return(0);
}
