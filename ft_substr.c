/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:53:07 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/15 19:43:02 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s || start >= ft_strlen(s) || len == 0)
		return (calloc(1, sizeof(char)));
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (j <= len && s[i] != '\0')
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
