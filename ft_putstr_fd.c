/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:44:57 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/15 10:20:06 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
	}
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	char	*s  = "hey ca va ? ";
	fd = open("fichier.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putstr_fd(s, fd);
	close(fd);
	return(0);
}*/
