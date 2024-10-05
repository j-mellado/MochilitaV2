/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:01:06 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 15:01:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t lendst;
	size_t lensrc;
	size_t i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	// Si el tamaño del buffer es menor o igual a la longitud de la cadena destino,
    // significa que no hay espacio suficiente para concatenar.
	if (dstsize <= lendst)
		return (lensrc + dstsize);

	while (src[i] != '\0' && (lendst + 1) < (dstsize - 1))
	{
		dst[lendst + i] = src[i]; // Concatena pero al final del contenido de dst para que no copie sustituyendolo
		i++;
	}

	dst[lendst + i] = '\0';

	return (lendst + lensrc);
}
