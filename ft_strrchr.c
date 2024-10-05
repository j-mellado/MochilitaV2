/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:56:25 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/05 14:02:59 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*aux;

	aux = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			aux = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (aux);
}
