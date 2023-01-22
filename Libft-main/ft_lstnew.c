/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:40 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:09:42 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

// int main()
// {
// 	char a[] = "zeynep";
// t_list *lst;

// lst = ft_lstnew((void *)a);
// printf("%s",lst->content);
// }
