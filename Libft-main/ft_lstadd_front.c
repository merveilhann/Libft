/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:08:55 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:08:58 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		new->next = NULL;
		*lst = new;
	}
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// int main()
// {
// 	t_list	*lst;
// 	lst = ft_lstnew("zeynep");
// 	t_list	*lst2;
// 	lst2 = ft_lstnew("sasmaz");
// 	lst->next = lst2;
// 	t_list *new;
// 	new = ft_lstnew("42");
// 	ft_lstadd_front(&lst,new);
// 	printf("%s",new->content);
// }
