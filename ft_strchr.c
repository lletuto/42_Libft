/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:34:30 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/19 11:59:33 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int tofind)
{
	int				i;
	unsigned char	*sstr;
	unsigned char	stofind;

	sstr = (unsigned char *)str;
	stofind = (unsigned char) tofind;
	i = 0;
	if (stofind > 255)
		stofind = stofind - 256;
	while (sstr[i])
	{
		if (sstr[i] == stofind)
		{
			return ((char *)&sstr[i]);
		}
		i++;
	}
	if (stofind == 0)
		return ((char *)&sstr[i]);
	if (stofind < 0 || stofind > 255)
		return ((char *)&sstr[i]);
	return ((void *)0);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	const char *str = "teste";
	int tofind = 1024;
	printf("ma ft = %s\n", ft_strchr(str, tofind));
	const char *str2 = "teste";
	int tofind2 = 1024;
	printf("ft officielle = %s", strchr(str2, tofind2));
	return (0);
}*/
