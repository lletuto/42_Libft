/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:59:20 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/09 16:28:20 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	nb;

	ptr = (unsigned char *) s;
	nb = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		ptr[i] = nb;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	size_t n = 9;
	void *s = malloc(sizeof(void) * n);
	int c = 4;
	size_t i= 0;
	unsigned char res = 0;

	ft_memset(s, c, n);
	while(i < n)
	{
		res = (((unsigned char*)s)[i]);
		printf("%01x\n", res);
		i++;
	}
	return(0);
}*/
