/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:12:28 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/12 17:22:51 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void) <stdio.h> needed for test
{
	char	str[] = "bbbbb";
	int		letter;

	letter = 'a';
	printf("before the ft %s\n",str);
	char*result = ft_memset(str,letter,5);
	printf("after the ft %s\n",str);
	return (0);
}
*/
