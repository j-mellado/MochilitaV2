/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:30:18 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/12 17:22:57 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
	{
		return (srclen);
	}
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int	main(void) <stdio.h> needed for test
{
	size_t		result;
	char		dest[15];
	const char	source[] = "Hello World!";
	size_t		bufferdest;

	bufferdest = 15;
	printf("dest before ft %s\n",dest);
	result = ft_strlcpy(dest,source,bufferdest);
	printf("dest after ft %s\n",dest);
	return (0);
}
*/
