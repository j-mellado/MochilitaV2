/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:48:16 by marvin            #+#    #+#             */
/*   Updated: 2024/09/13 13:48:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
 unsigned char*pointer;
 pointer = (unsigned char*)s;

 size_t i;
 i = 0;
    while (i < n)
    {
        pointer[i] = '\0';
        i++;
    }
}