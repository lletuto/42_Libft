/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:47:59 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/15 10:33:32 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*static char	ft_bip_boop(unsigned int index, char c)
{
	if (index % 2 == 0)
		c = 'o';
	else
		c = '_';
	return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s[i])
		i++;
	size = i;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char const *str = "yo les noob ";
	char *str2;
	str2 = ft_strmapi(str, &ft_bip_boop);
	printf("%s\n", str2);
	free(str2);
	return(0);
}*/
