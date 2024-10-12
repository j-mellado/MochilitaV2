/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:58:17 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/12 19:53:46 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	f;

	if (!*substr)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == substr[0])
		{
			f = 0;
			while (str[i + f] == substr[f] && i + f < len)
			{
				if (substr[f + 1] == '\0')
					return ((char *)&str[i]);
				f++;
			}
		}
		i++;
	}
	return (NULL);
}
