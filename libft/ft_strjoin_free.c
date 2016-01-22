/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 01:12:40 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/02/20 12:20:47 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int n)
{
	char	*dst;

	dst = ft_strjoin(s1, s2);
	if (n == 1 || n == 3)
	{
		ft_strclr(s1);
		free(s1);
	}
	if (n == 2 || n == 3)
	{
		ft_strclr(s2);
		free(s2);
	}
	return (dst);
}
