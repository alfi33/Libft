/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:33:20 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/10/09 12:51:34 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rev;

	rev = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			rev = (char *)s;
		s++;
	}
	if (c == '\0' || *s == (char)c)
		return ((char *)s);
	return (rev);
}
