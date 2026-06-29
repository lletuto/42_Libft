/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:33:14 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/19 12:29:47 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	while (ss1[i] && i < (len - 1))
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (ss1[i] - ss2[i]);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	const char	*s1 = "heheh";
	const char	*s2 = "hehah";
	size_t len = 12; 
	printf("%i\n", ft_strncmp(s1, s2, len));
	printf("%i", strncmp(s1, s2, len));
	return (0);
}*/
