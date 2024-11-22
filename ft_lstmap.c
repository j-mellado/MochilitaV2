/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:32:14 by jmellado          #+#    #+#             */
/*   Updated: 2024/11/22 14:51:49 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;

    while (lst != NULL)
    {
        new_node = ft_lstnew(f(lst->content));
        if (new_node == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}