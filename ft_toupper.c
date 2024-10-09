/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:11:12 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/09 15:15:23 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*
#include <stdio.h> needed for test

int	main(void)
{
	int	letter;
	int	upper;

	letter = 'b';
	upper = ft_toupper(letter);
	printf("before toupper'%c' after toupper %c\n", letter, upper);
	letter = 'B';
	upper =  ft_toupper(letter);
	printf("before toupper'%c' after toupper %c\n", letter, upper);
	letter = '4';
	upper =  ft_toupper(letter);
	printf("before toupper'%c' after toupper %c\n", letter, upper);
	return(0);
}
*/
