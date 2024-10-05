/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:11:49 by jmellado          #+#    #+#             */
/*   Updated: 2024/10/05 13:57:44 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'));
}
/*
#include <stdio.h> needed for test
int main()
{
    int alnum;

    alnum = '5';
    int result;

    result = ft_isalnum(alnum);
    printf("Is '%c' an alphanumeric character? %d\n", al+num, result);

    alnum = '-';
    result = ft_isalnum(alnum);

    printf("Is '%c' an alphanumeric character? %d\n", alnum, result);
    return(0);
}
*/
