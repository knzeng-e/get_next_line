/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 23:46:14 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/06/01 20:15:02 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	remove_nl(char *line)
{
	int	i;

	i = 0;
	while (line && line[i])
	{
		if (line[i] == '\n')
		{
			line[i] = '\0';
			return (i);
		}
		i++;
	}
	if (line)
		line[i] = '\0';
	return (i);
}

int	get_next_line(int const fd, char **line)
{
	static char		*save = "";
	char		buf[BUFF_SIZE + 1];
	char		*i;
	int			ret;


	if (fd < 0 || (line && (*line = NULL)))
		return (-1);
	ret = -1;
	*line = ft_strnew(BUFF_SIZE);
	while ((i = ft_memccpy(*line, save, '\n', ft_strlen(save))) == NULL && ret)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
		{
			return (-1);
		}
		buf[ret] = '\0';
		save = ft_strjoin(save, buf);
	}
	save += 1 + remove_nl(*line);
	return ((i != NULL) || (ft_strlen(*line) != 0));
}
