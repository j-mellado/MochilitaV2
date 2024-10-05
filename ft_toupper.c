/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:11:12 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/05 13:50:26 by jmellado         ###   ########.fr       */
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
int main()
{
    int letter;

    letter = 'b';
    int upper;


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
