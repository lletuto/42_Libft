/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:38:04 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/21 09:56:30 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
static void	ft_bip_boop(unsigned int index, char* s)
{
	if (index % 2 == 0)
		*s = '<';
	else
		*s = '3';
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
	s[index] = '\0';
}
/*
#include <stdio.h>
int main ()
{
	char s[] = "yeehaw";
	ft_striteri(s, ft_bip_boop);
	printf("%s\n",s );
	return(0);
}*/
