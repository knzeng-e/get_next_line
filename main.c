/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 02:24:05 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/06/01 13:20:00 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		fd;
	int		cpt;
	int		ret;
	char	*line;

	line = NULL;
	if (ac)
	{
		cpt = 0;
		fd = (ac == 1) ? 0 : open(av[1], O_RDONLY);
		while ((ret = get_next_line(fd, &line)) > 0)
			printf("\n%s",line);
		//printf("\nAffichage de la line %d ==> %s", ++cpt, line);
	}
	return (0);
}
