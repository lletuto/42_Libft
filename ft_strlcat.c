/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:01:43 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/18 19:44:58 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen((char *)s2);
	if (size == 0)
		return (s2len);
	if (size <= s1len)
		return (size + s2len);
	while (s2[i] && (s1len + i + 1) < size)
	{
			s1[s1len + i] = s2[i];
			i++;
	}
		s1[s1len + i] = '\0';
	return (s1len + s2len);
}
/*
#include <stdio.h>
int main()
{
	size_t size = 0;
	char s1[10] = "a";
	const char *s2 = "lorem ipsum dolor sit amet";
	printf("%zu",ft_strlcat(s1, s2, size));
}*/
