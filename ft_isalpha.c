/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:10:29 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:14:23 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
#include <stdio.h> needed for test

int	main(void)
{
	int	letter;
	int	result;

	letter = 'A';
	result = ft_isalpha(letter);
	printf("Is '%c' an alphabetic character? %d\n", letter, result);
	letter = '1';
	result = ft_isalpha(letter);
	printf("Is '%c' an alphabetic character? %d\n", letter, result);
	return(0);
}
*/
