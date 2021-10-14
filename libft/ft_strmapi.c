/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:24:44 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/10/09 19:10:27 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!s || !f)
		return (NULL);
	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (!tmp)
		return (NULL);
	while (s[i])
	{
		tmp[i] = (f)(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
