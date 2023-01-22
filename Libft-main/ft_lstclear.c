/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:02 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:09:05 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst);
		del((*lst)->content);
		free(*lst);
		*lst = tmp->next;
	}
}
// void del(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list  *lst;
//     t_list  *lst2;
//     char    *str;
//     char    *str2 = "helloworld";
//     int     i = 0;
//     str = malloc(sizeof(char) * ft_strlen(str2) + 1);
//     while (str2[i])
//     {
//         str[i] = str2[i];
//         i++;
//     }
//     lst = malloc(sizeof(t_list));
//     lst->content = (void *)str;
//     lst->next = NULL;
//     lst2 = ft_lstnew(ft_strdup("selamdunya"));
//     lst->next = lst2;
//     printf("%s\n", (char *)lst->content);
//     printf("%p\n", (char *)lst->next);
//     ft_lstclear(&lst, del);
//     printf("%s\n", (char *)lst->content);
//     printf("%p\n", (char *)lst->next);
// }
