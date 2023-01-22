/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:49 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:09:51 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *lst = ft_lstnew("z");
// 	lst->next = ft_lstnew("e");
// 	lst->next->next = ft_lstnew("y");
// 	lst->next->next->next = ft_lstnew("n");
// 	lst->next->next->next->next = ft_lstnew("e");
// 	lst->next->next->next->next->next= ft_lstnew("p");
// 	printf("%d",ft_lstsize(lst));
// }
