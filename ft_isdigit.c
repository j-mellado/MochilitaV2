/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:46:06 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:29 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

/*
#include <stdio.h> needed for test

int	main(void)
{
	int	digit;
	int	result;

	digit = '5';
	result = ft_isdigit(digit);
	printf("Is '%c' a digit?? %d\n", digit, result);
	digit = 'A';
	result = ft_isdigit(digit);
	printf("Is '%c' a digit? %d\n", digit, result);
	return(0);
}
*/
