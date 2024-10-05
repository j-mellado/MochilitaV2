/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:26:28 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/05 13:44:45 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*
#include <stdio.h> needed for test
int main()
{
    int letter;

    letter = 'C';
    int lower;


    lower = ft_tolower(letter);
    printf("before tolower'%c' after tolower %c\n", letter, lower);

    letter = 'c';
    lower =  ft_tolower(letter);
	printf("before tolower'%c' after tolower %c\n", letter, lower);

	letter = '9';
    lower =  ft_tolower(letter);
	printf("before tolower'%c' after tolower %c\n", letter, lower);


    return(0);
}
*/
