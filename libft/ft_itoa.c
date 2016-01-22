/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:02:31 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 11:13:09 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int			i;

	i = 0;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

static char		*ft_negative(int n, int i, char *s)
{
	char		*hellvalue;
	char		*thehellvalue;

	thehellvalue = "-2147483648";
	hellvalue = "-./,),(-*,(";
	if (n < 0 && i == 0)
		s[i] = 45;
	if (ft_strcmp(s, hellvalue) == 0)
		ft_strcpy(s, thehellvalue);
	return (s);
}

char			*ft_itoa(int n)
{
	char		*s;
	long int	x;
	int			i;
	long int	nb;

	i = ft_intlen(n);
	s = (char*)malloc(sizeof(char) * i + 2);
	nb = n;
	if (n < 0)
	{
		i = i + 1;
		nb = -n;
	}
	if (nb == 0)
		i = 1;
	s[i] = '\0';
	x = 1;
	while (i >= 1)
	{
		s[i - 1] = (48 + (nb % (10 * x)) / x);
		i--;
		x = (x * 10);
	}
	ft_negative(n, i, s);
	return (s);
}
