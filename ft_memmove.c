/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:35:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 12:56:51 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dest < src) //la comparacion esta comparando la direccion de memoria de la primera casilla del array
		return (ft_memcpy(dest, src, n));
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		d[n] = s[n];
	return (dest);
}
