/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:15:35 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:15:37 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i != 0 && (char)c != *(s + i))
	i--;
	if ((char)c == *(s + i))
		return ((char *)(s + i));
	return (0);
}
/*

int main()
{
    char a[] = "zeynep";
    printf("%s",ft_strrchr(a,'e'));
}*/
