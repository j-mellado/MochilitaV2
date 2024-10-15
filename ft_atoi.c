/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:14:32 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 18:14:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char* str)
 {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

/*
int main() { #include <stdio.h> needed for test
    const char* str = "   -1234";
    int val = myAtoi(str);
    printf(the number is: %d\n", val);
    return 0;
}
*/
