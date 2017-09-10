/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 08:58:02 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/27 23:33:37 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		still_full(char **save, char **line)
{
	char			*trash;
	char			*trasher;

	if ((trash = ft_strchr(*save, '\n')))
	{
		*trash = '\0';
		trash++;
		*line = ft_strdup(*save);
		trasher = ft_strdup(trash);
		ft_memdel((void **)save);
		*save = ft_strdup(trasher);
		ft_memdel((void **)&trasher);
		return (1);
	}
	if (!(trash = ft_strchr(*save, '\n')) && (ft_strlen(*save) > 0))
	{
		*line = ft_strdup(*save);
		ft_strclr(*save);
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char		*save = NULL;
	char			buff[BUFF_SIZE + 1];
	int				val;
	char			*trash;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	while ((val = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[val] = '\0';
		trash = ft_strjoin(save, buff);
		free(save);
		save = trash;
	}
	if (val == -1)
		return (-1);
	if (val == 0 && !(save))
		return (0);
	if (still_full(&save, line))
		return (1);
	return (0);
}
