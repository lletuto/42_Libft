/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:31:41 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/14 13:20:59 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	size_t n = 9;
	void *s = malloc(sizeof(void) * n);
	size_t i = 0;
	unsigned char res = 0;

	ft_bzero(s, n);
	while(i < n)
	{
		res = (((unsigned char*)s)[i]);
		printf("%01x\n", res);
		i++;
	}
	return(0);
}*/
