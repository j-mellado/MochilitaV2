/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:36:25 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/05 13:25:18 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
/*
#include <stdio.h> needed for test
int main()
{
    int ascii;

    ascii = '+';
    int result;


    result = ft_isascii(ascii);
    printf("Is '%c' a non-extended ascii? %d\n", ascii, result);

    ascii = 'ø';
    result = ft_isascii(ascii);

    printf("Is '%c' a non-extended ascii? %d\n", ascii, result);
    return(0);
}
*/
