/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:29:45 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 17:34:45 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //ESTE EXPLOTO REVISAR

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	  if (c == '\0')
    {
        return (ptr);
    }
	return (NULL);
}
