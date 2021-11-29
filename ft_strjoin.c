/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:03:03 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/26 19:31:55 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dest, const char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		dest[i] = str[i];
	dest[i] = 0;
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{	
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joined;

	str_joined = malloc(sizeof(*str_joined) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (str_joined == 0)
		return (0);
	str_joined[0] = 0;
	ft_strcat(str_joined, s1);
	ft_strcat(str_joined, s2);
	return (str_joined);
}
