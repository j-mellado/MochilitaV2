/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:01:06 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 15:15:04 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] != '\0' && (lendst + 1) < (dstsize - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
