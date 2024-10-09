/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:55 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:33 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}

/*
#include <stdio.h> needed for test

int	main(void)
{
	int	print;
	int	result;

	print = '5';
	result = ft_isprint(print);
	printf("Is '%c' a printable character? %d\n", print, result);
	print = 'ø';
	result = ft_isprint(print);
	printf("Is '%c' a printable character? %d\n", print, result);
	return(0);
}
*/
