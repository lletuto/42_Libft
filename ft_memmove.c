/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:46:58 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/20 18:20:30 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*revcpy(unsigned char *sdest, unsigned char *ssrc, size_t size)
{
	size_t	i;

	i = size - 1;
	while (i > 0)
	{
		sdest[i] = ssrc[i];
		i--;
	}
	sdest[i] = ssrc[i];
	return (sdest);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	sdest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if ((!(dest) && !(src)) || !(size))
		return (dest);
	if (dest > src)
		revcpy(sdest, ssrc, size);
	else
	{
		i = 0;
		while (i < size)
		{
			sdest[i] = ssrc[i];
			i++;
		}
	}
	return (sdest);
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//size_t n = NULL;
	int src[] = {1, 2, 3, 4, 5, 6};
	//int *dest = malloc(n);
	//char src[] = "conseipsum dolor sit a";
	size_t n = sizeof(int) * 7;
	//char dest[56] = "";
	int *res = NULL;
	size_t i= 0;

	res = ft_memmove(src, src, n);
	printf("\n");
	while (i < 6)
	{
		printf("%i\n", res[i]);
		i++;
	}
	return(0);
}*/
