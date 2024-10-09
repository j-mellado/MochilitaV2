/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:36:25 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:27 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
/*
#include <stdio.h> needed for test

int	main(void)
{
	int	ascii;
	int	result;

	ascii = '+';
	result = ft_isascii(ascii);
	printf("Is '%c' a non-extended ascii? %d\n", ascii, result);
	ascii = 'ø';
	result = ft_isascii(ascii);
	printf("Is '%c' a non-extended ascii? %d\n", ascii, result);
	return(0);
}
*/
