/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:47:11 by marvin            #+#    #+#             */
/*   Updated: 2024/09/13 14:47:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


void *ft_memcpy(void *dest, const void *src, size_t count)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;   
    i = 0; 
    while (i < count)
    {
       d[i] = s[i]; 
        i++;
    }


    return dest;
}




