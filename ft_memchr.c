/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:23:47 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/20 12:58:59 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *block, int tofind, size_t size)
{
	size_t			i;
	unsigned char	*sblock;
	unsigned char	stofind;

	sblock = (unsigned char *) block;
	stofind = (unsigned char) tofind;
	i = 0;
	while (i < size)
	{
		if (sblock[i] == stofind)
		{
			return (&sblock[i]);
		}
		i++;
	}
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char *str = "ratateta";
	int tofind = 'e';
	size_t size = 15;
	printf("%s\n", (char *)ft_memchr(str, tofind, size));
	printf("%s", (char *)memchr(str, tofind, size));
	return (0);
}*/
