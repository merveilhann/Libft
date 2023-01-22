/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:12:02 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:12:05 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// #include<stdio.h>
// void lower(unsigned int i, char *s)
// {
// 	if (s[0] >= 65 && s[0] <= 90)
//         s[0] = s[0] + 32;
// }
// int main()
// {
//     char str[] = "ZEYNEP";
//     ft_striteri(str, lower);
//     printf("%s", str);
// }
