/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:28:22 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/11 15:32:19 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void			*bloc;
	size_t			i;
	unsigned char	*sbloc;

	bloc = malloc (elementSize * elementCount);
	if (!bloc)
		return (NULL);
	sbloc = (unsigned char *) bloc;
	i = 0;
	while (i < (elementSize * elementCount))
	{
		sbloc[i] = 0;
		i++;
	}
	return (bloc);
}
/*
#include <stdio.h>
int	main()
{
	size_t count = 3;
	size_t size = 4;
	size_t i = 0;
	unsigned char *res = ft_calloc(count, size); 
	while (i < count)
	{
		printf("%01x\n", res[i]);
		i++;
	}
	i = 0;
	res = calloc(count,size);
	while (i < count)
        {
                printf("calloc = %01x\n", res[i]);
                i++;
        }
	return(0);
}*/
