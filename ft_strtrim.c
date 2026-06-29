/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:39:31 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/19 09:30:04 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	sizing(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while ((is_set(s1[i], set) == 1))
	{
		i++;
	}
	while (s1[i])
	{
		i++;
		size++;
	}
	i = i - 1;
	if (size == 0)
		return (size);
	while (i > 0 && is_set(s1[i], set) == 1)
	{
		i--;
		size--;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	size = sizing(s1, set) + 1;
	str = "";
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while ((is_set(s1[i], set) == 1) && s1[i])
		i++;
	while (j < (size - 1))
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	char *s1 = "   xxx   xxx";
	char *set = " x";
	char *str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
}*/
