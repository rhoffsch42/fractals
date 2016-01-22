/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:47 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 17:44:55 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_error_issue(const char *s, char c, char **tab)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!s)
	{
		tab[i] = NULL;
		return (tab);
	}
	if (s[x] == 0)
		tab[i] = NULL;
	while (s[x] == c)
	{
		x++;
		if (s[x] == 0)
		{
			tab[i] = NULL;
			return (tab);
		}
	}
	return (tab);
}

static int	ft_taballoc(const char *s, char c)
{
	int		x;
	int		len;

	len = 0;
	x = 0;
	while (s[x] == c)
		x++;
	while (s[x] != c && s[x] != '\0')
	{
		len++;
		x++;
	}
	return (len);
}

static char	**ft_fill_tab(const char *s, char c, char **tab, int i)
{
	int		j;
	int		x;

	x = 0;
	while (s[x] != '\0')
	{
		tab[i] = (char*)malloc(sizeof(char) * (ft_taballoc(s + x, c) + 1));
		j = 0;
		while ((s[x] != c && s[x] != '\0'))
		{
			tab[i][j++] = s[x++];
			if (s[x] == c)
				tab[i++][j] = '\0';
			if (s[x] == 0)
			{
				tab[i++][j] = '\0';
				tab[i] = NULL;
				return (tab);
			}
		}
		x++;
		if (s[x] == 0)
			tab[i] = NULL;
	}
	return (tab);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	ft_error_issue(s, c, tab);
	ft_fill_tab(s, c, tab, i);
	return (tab);
}
