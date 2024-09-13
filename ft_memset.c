/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:12:28 by jmellado          #+#    #+#             */
/*   Updated: 2024/09/12 12:43:46 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memset (void *s, int c, size_t n)
{
   unsigned char*pointer;
   size_t i;

   pointer = (unsigned char*)s;
    i = 0;
    while(i < n)
    {
        pointer[i] = (unsigned char)c;
        i++;   
    }

    return (s);
}