/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:56:25 by jmellado          #+#    #+#             */
/*   Updated: 2024/09/20 15:13:33 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	char	*ptr;
	char	*aux;

	ptr = (char *)str;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
		{
			aux = ptr;
		}
		ptr++;
	}
	if (c == '\0')
	{
		return (ptr);
	}
	return (aux);
}
