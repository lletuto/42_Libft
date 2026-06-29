/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:43:45 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/20 13:40:32 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sdest;
	unsigned char	*ssrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	sdest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (sdest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//size_t n = NULL;
	size_t n = sizeof(int) * 6;voi
	//int src[] = {1, 2, 3, 4, 5, 6};
	//int *dest = malloc(n);
	int *src = NULL;
	int *dest = NULL;
	size_t i= 0;
	unsigned char res = 0;

	ft_memcpy(dest, src, n);
	while (i < 6)
	{
		res = (((unsigned int*) dest)[i]);
		printf("%i\n", res);
		i++;
	}
	return(0);
}*/
