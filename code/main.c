/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 06:24:08 by llefevre          #+#    #+#             */
/*   Updated: 2017/11/04 16:26:33 by llefevre         ###   ########.fr       */
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

char	*ft_read(char *av, t_tri *lst)
{
	int		fd;
	char	buf[BUFSIZE + 1];
	char *out;
	ssize_t	re;

	if ((strcmp(av, "Makefile") == 0) || (strcmp(av, "random") == 0))
		ft_error(0);
	fd = open(av, O_RDONLY);
	out = NULL;
	if (fd == -1)
		return (NULL);
	while ((re = read(fd, &buf, BUFSIZE)) > 0)
	{
		lst->re = re;
		out  = ft_malloncat(out, buf, re);
	}
	return (out);
}

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	if (i == 5)
	{
		ft_putstr("-----------------------------\n|       GOOD GAME           |\n|         NEXT LEVEL?       |\n-----------------------------\n");
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
		if(lst->egal2 == 7)
		{
		printf("%Lf|",lst->egal);
			lst->start_x = lst->k + 0.5;
			lst->start_y = lst->j + 0.5;
		}
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
	lst.str = 0;
	lst.time = time(NULL);
	srand(time(NULL));
	lst.random = (rand() % 3);
	if(ft_strcmp(av[1], "crea") == 0 && ac == 3)
		crea_map(&lst, av[2]);
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		get_next_line(fd, &line);
		lst.map = line;
		printf("%s\n", lst.map);
		print_mini_map(&lst, av);
	}
	else
		ft_error(0);
	return(0);
}
