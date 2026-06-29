/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:27:06 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/15 10:17:27 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	char	c  = 'c';
	fd = open("fichier.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putchar_fd(c, fd);
	close(fd);
	return(0);
}*/
