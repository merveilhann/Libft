/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:17 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:09:20 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!f || !lst)
		return ;
	while (lst)
	{
		tmp = lst->next;
		f(lst->content);
		lst = tmp;
	}
}
// void lower(void *s)
// {
// 	size_t	i;

// 	while(!(unsigned char *)s)
// 	{
// 		if(((unsigned char *)s)[i]>='a' &&((unsigned char *)s)[i]<='z')
// 			((unsigned char *)s)[i] = ((unsigned char *)s)[i]+32;
// 		i++;
// 	}

// }
// #include<stdio.h>
// int main()
// {
// 	t_list	*lst;
// 	lst=ft_lstnew("zeynep");
// 	ft_lstiter(lst,lower);
// 	printf("%s",lst->content);
// }
