/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:36:41 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/18 18:25:44 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-", 1);
			write(fd, "2147483648", 10);
			return ;
		}
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		if (n < 10)
		{	
			n = n + '0';
			write(fd, &n, 1);
		}
	}
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	int n  = -214748348;
	fd = open("fichier.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putnbr_fd(n, fd);
	close(fd);
	return(0);
}*/
