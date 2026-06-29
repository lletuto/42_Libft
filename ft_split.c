/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:54:04 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:05 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	words;

	i = 1;
	words = 0;
	if (s[0] != c && s[0] != '\0')
		words++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c && s[i])
			words++;
		i++;
	}
	return (words);
}

static char	**str_filler(char **tab, char *s, char c, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((s[i] != c) && s[i])
		i++;
	tab[index] = malloc(sizeof(char) * (i + 1));
	if (!tab[index])
	{
		while (j < index)
		{
			free(tab[j]);
			j++;
		}
		return (NULL);
	}
	i = 0;
	while ((s[i] != c) && s[i])
	{
		tab[index][i] = s[i];
		i++;
	}
	tab[index][i] = '\0';
	return (tab);
}

static char	**tab_filler(char **tab, char *s, char c)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!str_filler(tab, &s[i], c, index))
				return (NULL);
			index++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i] == c && s[i])
			i++;
	}
	tab[index] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**tab;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	size = count_words(str, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	if (!tab_filler(tab, str, c))
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}	

/*#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;
	char **tab = ft_split(argv[1], argv[2][0]);
	while (i <= count_words(argv[1], argv[2][0]))
	{	
		printf("%s\n",tab[i]);
		i++;
	}
}*/
