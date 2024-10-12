/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:56:25 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/12 16:57:19 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
		{
			last_occurrence = str;
		}
		str++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)last_occurrence);
}
