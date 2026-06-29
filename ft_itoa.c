/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:26:00 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/18 17:55:35 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_nb(int nb)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		index;
	char	*str;

	index = count_nb(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[index] = '\0';
	index--;
	while (index >= 0 && str[index] != '-')
	{
		str[index] = (n % 10) + '0';
		n = n / 10;
		index --;
	}
	return (str);
}
/*
#include <stdio.h>
int main ()
{
	int	n = 0; 
	n = -2147483648;
	char *str = NULL;
	str = ft_itoa(n);
	printf("str = %s", str);
	free(str);
	return(0);
}*/
