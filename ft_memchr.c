/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:39:18 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:36 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h> needed for test

int	main(void)
{
	const char	str[] = "String Test";
	char		target;
	char		*result;

	target = 'g';
	result = (char *)memchr(str, target, strlen(str));
	if (result != NULL)
	{
		printf("Character '%c' found at position: %ld\n", target, result - str);
	}
	else
	{
		printf("Character '%c' not found in the string.\n", target);
	}
	return (0);
}
*/
