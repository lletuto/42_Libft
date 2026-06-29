/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:42 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/15 10:25:12 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd > 0)
	{
		while (s[i])
		{	
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	char	*s  = "lequipe?";
	fd = open("fichier.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putendl_fd(s, fd);
	close(fd);
	return(0);
}*/
